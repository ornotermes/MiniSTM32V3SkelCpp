/*
 * Copyright (C) 2013-2014 Rikard Lindström <ornotermes@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef ADS7843_CPP
#define ADS7843_CPP

inline void TouchADS7843::_cs(bool b)
{
	(b)?gpio_set(GPIOA, GPIO4):gpio_clear(GPIOA, GPIO4);
}

//Setup hardware
TouchADS7843::TouchADS7843(void)
{
	//Enable clocks
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_SPI1EN); //SPI
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_IOPAEN); //SPI
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_IOPCEN); //PEN_INT
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_AFIOEN); //AFIO (EXTI)
	
	//Setup GPIO
	gpio_set_mode(GPIOC, GPIO_MODE_INPUT, GPIO_CNF_INPUT_FLOAT, BIT13);	//PEN_INT
	gpio_set_mode(GPIOA, GPIO_MODE_INPUT, GPIO_CNF_INPUT_FLOAT, BIT6);	//MISO
	gpio_set_mode(GPIOA, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, BIT4); //CS
	gpio_set_mode(GPIOA, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_ALTFN_PUSHPULL, BIT5 | BIT7); //MOSI, SCK
	
	//Set up SPI as mater
	_cs(1);
	spi_enable_software_slave_management(SPI1);
	spi_set_nss_high(SPI1);
	spi_set_baudrate_prescaler(SPI1, 7);
	spi_set_clock_polarity_0(SPI1);
	spi_set_clock_phase_0(SPI1);
	spi_set_dff_8bit(SPI1);
	spi_set_master_mode(SPI1);
	spi_enable(SPI1);
	
	//Enable PEN_INT
	nvic_enable_irq(NVIC_EXTI15_10_IRQ);
	exti_select_source(EXTI13, GPIOC);
	exti_set_trigger(EXTI13, EXTI_TRIGGER_BOTH);
	exti_reset_request(EXTI13);
	exti_enable_request(EXTI13);
	
}

uint16_t TouchADS7843::_getPos(bool y)
{
	uint16_t recv = 0;
	rcc_set_ppre2(RCC_CFGR_PPRE2_HCLK_DIV4);
	_cs(0);
	spi_xfer(SPI1, BIT7 | ((y)?BIT6:0) | BIT4 | BIT2);
	recv |= spi_xfer(SPI1, 0)<<8;
	recv |= spi_xfer(SPI1, 0);
	_cs(1);
	rcc_set_ppre2(RCC_CFGR_PPRE2_HCLK_NODIV);
	return recv;
}

TouchADS7843::Event TouchADS7843::Task(void)
{
	Event e;
	bool oldPen = _rawPen;
	_rawPen = !gpio_get(GPIOC, BIT13);
	
	if (oldPen == 0 && _rawPen == 0) _pen = None;
	if (oldPen == 0 && _rawPen == 1) _pen = Press;
	if (oldPen == 1 && _rawPen == 1) _pen = Hold;
	if (oldPen == 1 && _rawPen == 0) _pen = Release;
	
	if (_pen == Press || _pen == Hold)
	{
		_rawX = _getPos(0);
		_rawY = _getPos(1);
		//calculate adjusted X/Y
		_x = 320 - (_rawX - _offsetX) / _scaleX;
		_y = (_rawY - _offsetY) / _scaleY;
		if (_x > 30000) _x = 0;
		if (_x > 319) _x = 319;
		if (_y > 30000) _y = 0;
		if (_y > 239) _y = 239;
	}
	e.X = _x;
	e.Y = _y;
	e.Pen = _pen;
	return e;
}

void TouchADS7843::Calibrate(lcdILI9325 *disp)
{

	unsigned int calVal[3][2];
	unsigned char calNum = 0;
	disp->Clear();
	_calibrated = 0;
	while(!_calibrated)
	{
		switch(calNum)
		{
		case 0:
			disp->MaskDraw(target, 80-16, 120-16);
			break;
		case 1:
			disp->MaskDraw(target, 240-16, 60-16);
			break;
		case 2:
			disp->MaskDraw(target, 160-16, 180-16);
			break;
		default:
			disp->Clear();
			
			disp->PrintFormat("Raw cal data:\n0: (%i, %i)\n1: (%i, %i)\n2: (%i, %i)\n", calVal[0][0], calVal[0][1], calVal[1][0], calVal[1][1], calVal[2][0], calVal[2][1]);
			
			_scaleX = ((calVal[0][0] - calVal[1][0])*2)/320;
			_scaleY = ((calVal[2][1] - calVal[1][1])*2)/240;
			_offsetX = calVal[1][0] - (calVal[2][0] - calVal[1][0]);
			_offsetY = calVal[1][1] - (calVal[0][1] - calVal[1][1]);
			
			disp->PrintFormat("Calculated calibration:\nScale X: %i\nScale Y: %i\nOffset X: %i\nOffset Y: %i\n", _scaleX, _scaleY, _offsetX, _offsetY);
			
			_calibrated = 1;
			
			disp->PrintString("Tap the screen to continue.\n");
			while(TouchADS7843::PenState::Release != Task().Pen);
			disp->Clear();
			return;
		}
		disp->TextGoTo(70,10);
		disp->PrintString("Press targets to calibrate.");
		while(TouchADS7843::PenState::Press != Task().Pen);
		calVal[calNum][0] = _rawX;
		calVal[calNum][1] = _rawY;
		while(TouchADS7843::PenState::Release != Task().Pen);
		disp->Clear();
		calNum++;
	}
}
void TouchADS7843::Calibrate(lcdILI9325 disp)
{
	Calibrate(&disp);
}

void TouchADS7843::WriteRTC(void)
{
	_regScaleX = _scaleX;
	_regScaleY = _scaleY;
	_regOffsetX = _offsetX;
	_regOffsetY = _offsetY;
}
bool TouchADS7843::ReadRTC(void)
{
	
	if(_regScaleX!=0 || _regScaleY!=0 || _regOffsetX!=0 || _regOffsetY!=0)
	{
		_scaleX = _regScaleX;
		_scaleY = _regScaleY;
		_offsetX = _regOffsetX;
		_offsetY = _regOffsetY;
		_calibrated = 1;
	}
	return _calibrated;
	
}


void exti15_10_isr(void)
{
	exti_reset_request(EXTI13);
}

#endif
