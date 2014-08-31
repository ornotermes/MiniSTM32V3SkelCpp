/*
 * Copyright (C) 2012-2014 Rikard Lindström <ornotermes@gmail.com>
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
 
#ifndef LCD_ILI9325_CPP
#define LCD_ILI9325_CPP

uint16_t Color::FromRGB(uint8_t red, uint8_t green, uint8_t blue)
{
	uint16_t color = 0;
	color |= (red >> 3) << 11;
	color |= (green >> 2) << 5;
	color |= (blue >> 3);
	return color;
}

inline void lcdILI9325::_cs(bool state)
{
	if(state) gpio_set(_portCS, _pinCS);
	else gpio_clear(_portCS, _pinCS);
}
inline void lcdILI9325::_rs(bool state)
{
	if(state) gpio_set(_portRS, _pinRS);
	else gpio_clear(_portRS, _pinRS);
}
inline void lcdILI9325::_wr(bool state)
{
	if(state) gpio_set(_portWR, _pinWR);
	else gpio_clear(_portWR, _pinWR);
}
inline void lcdILI9325::_rd(bool state)
{
	if(state) gpio_set(_portRD, _pinRD);
	else gpio_clear(_portRD, _pinRD);
}
inline void lcdILI9325::_dir(bool dir)
{
	if (dir)
	{
		gpio_set_mode(_portMSB, GPIO_MODE_INPUT, GPIO_CNF_INPUT_FLOAT, 0xff00);	//PB8:PB15=(DB8:DB15)
		gpio_set_mode(_portLSB, GPIO_MODE_INPUT, GPIO_CNF_INPUT_FLOAT, 0x00ff);	//PC0:PC12=(DB0:DB7)
	}
	else //output
	{
		gpio_set_mode(_portMSB, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, 0xff00);	//PB8:PB15=(DB8:DB15)
		gpio_set_mode(_portLSB, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, 0x00ff);	//PC0:PC12=(DB0:DB7)
	}
}
inline uint16_t lcdILI9325::_read(void)
{
	return (gpio_get(_portMSB, 0xff00) | gpio_get(_portLSB, 0x00ff));
}
inline void lcdILI9325::_write(uint16_t data)
{
	gpio_clear(_portMSB, 0xff00);
	gpio_clear(_portLSB, 0x00ff); 
	gpio_set(_portMSB, ((data) & 0xff00));
	gpio_set(_portLSB, ((data) & 0x00ff));
}
	
void lcdILI9325::_command(uint16_t command)
{
	_rs(0);
	_write(command);
	_wr(0);
	_wr(1);
	_rs(1);
}
void lcdILI9325::_dataWrite(uint16_t data)
{
	_write(data);
	_wr(0);
	_wr(1);
}
uint16_t lcdILI9325::_dataRead(void)
{
	_dir(1);
	_rd(0);
	uint16_t data = _read();
	_rd(1);
	_dir(0);
	return data;
}

void lcdILI9325::_regWrite(uint16_t reg, uint16_t data)
{
	_cs(0);
	_command(reg);
	_dataWrite(data);
	_cs(1);
}
uint16_t lcdILI9325::_regRead(uint16_t reg)
{
	_cs(0);
	_command(reg);
	uint16_t data = _dataRead();
	_cs(1);
	return data;
}

void lcdILI9325::PrintChar(char c)
{
	uint16_t color = 0;
	switch(c)
	{
	case 0:
		break;
	case '\n':
	case 13: //CR
		_textY += _font->Height;
		_textX = _textX1;
		break;
		
	default:
		c -= 32;
		if ( (_textY + _font->Height) > (_textY2) ) _textY = _textY1;
		for	(uint16_t y = 0; y < _font->Height; y++)
		{
			GoTo(_textX, _textY+y);
			_cs(0);
			_command(0x0022);
			uint8_t charByte = _font->Data[(c)*_font->Height+y];
			for (uint16_t x = 0; x < _font->Width; x++)
			{
				if ( ( charByte & ( 1<<(8-x) ) ) > 0) color = _textColor;
				else color = _backColor;
				_dataWrite(color);
			}
			for (uint16_t x = 0; x < _font->Space; x++)
			{
				_dataWrite(_backColor);
			}
			_cs(1);
		}
		_textX += _font->Width + _font->Space;
		break;
	}
}

lcdILI9325::lcdILI9325(uint32_t portMSB, uint32_t portLSB, uint32_t portCS, uint16_t pinCS, uint32_t portRS, uint16_t pinRS, uint32_t portWR, uint16_t pinWR, uint32_t portRD, uint16_t pinRD, uint32_t portLED, uint16_t pinLED)
{
	_portMSB = portMSB;
	_portLSB = portLSB;
	_portCS = portCS; _pinCS = pinCS;
	_portRS = portRS; _pinRS = pinRS;
	_portWR = portWR; _pinWR = pinWR;
	_portRD = portRD; _pinRD = pinRD;
	_portLED = portLED; _pinLED = pinLED;
	
	// Hardware setup //

	gpio_set_mode(_portCS, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, _pinCS);
	gpio_set_mode(_portRS, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, _pinRS);
	gpio_set_mode(_portWR, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, _pinWR);
	gpio_set_mode(_portRD, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, _pinRD);
	gpio_set_mode(_portLED, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, _pinLED);
	
	_cs(1);
	_rs(1);
	_wr(1);
	_rd(1);
	
	_dir(0);
	
	// Software Init //
		
	_model = _regRead(0x0000);
	
	//PSU part I (set VC[2:0], VRH[3:0], VCM[5:0], VDV[5:0], PON=0, BT[2:0]=000)
	_regWrite(0x0010,0x0000); //Power Control 1 - BTmask0x0700
	_regWrite(0x0011,0x0007); //Power Control 2 - VCmask0x0007=0x0007(Vref(Vci1)=1.0 * Vci)
	_regWrite(0x0012,0x008d); //Power Control 3 - VCIREmask0x0080=0x0080(2.5Vref), VRHmask0x000f=0x000d(VREG1OUT=4.625V), PONmask0x0000=0x0000(VGL output enable)
	_regWrite(0x0013,0x1900); //Power Control 4 - VDVmask0x1f00=0x1900(Vcom = VREG1OUT * 1.24)
	_regWrite(0x0029,0x0025); //Power Control 7 - VCMmask0x003f=0x0025(VcomH = VREG1OUT * 0.87)

	//stabilizing time for PSU(rec 50ms+)
	for (int i = 0; i < 15000; i++) __asm__("nop");

	//PSU part II (Set BT[2:0], PON=1, AP[2:0], APE=1, DC1[2:0], DC2[2:0]
	_regWrite(0x0010,0x1690); //Power Control 1 - SAPmask0x1000=0x1000(Source driver enable), BTmask0x0700=0x0600(step up factor), APmask0x0070=0x0010(Contrast G1.0/S1.0), APEmask0x0080=0x0080(enable PSU)
	_regWrite(0x0012,0x009d); //Power Control 3 - VCIREmask0x0080=0x0080(2.5Vref), VRHmask0x000f=0x000d(VREG1OUT=4.625V), PONmask0x0000=0x0010(VGL output enable)

	//stabilizing time for PSU(rec 80ms+)
	for (int i = 0; i < 250000; i++) __asm__("nop");

	//Set other registers
	_regWrite(0x0060,0x2700); //Gate Scan Control 1 - LVmask0x3f00=0x2700(320 lines)
	_regWrite(0x0061,0x0001); //Gate Scan Control 2 - REVmask0x0001=0x0001(greyscale inverstion)
	_regWrite(0x0003,0x1030); //Set default GRAM Acces Direction for default rotation (vertical/0)
	_regWrite(0x002B,0x000e); //Set frame rate to 112 fps

	//Enable display
	_regWrite(0x0007,0x0133); //Display Control 1
	for (int i = 0; i < 50000; i++)__asm__("nop");
	
}
void lcdILI9325::Light(bool state)
{
	if(state) gpio_set(_portLED, _pinLED);
	else gpio_clear(_portLED, _pinLED);
}
uint16_t lcdILI9325::GetWidth(void)
{
	uint16_t w;
	switch (_rotation)
	{
		case 0: //0 deg
		case 2: //180 deg
			w = _width;
			break;
		case 1: //90 deg
		case 3: //270 deg
			w = _height;
			break;
	}
	return w;
}
uint16_t lcdILI9325::GetHeight(void)
{
	uint16_t h;
	switch (_rotation)
	{
		case 0: //0 deg
		case 2: //180 deg
			h = _height;
			break;
		case 1: //90 deg
		case 3: //270 deg
			h = _width;
			break;
	}
	return h;
}
void lcdILI9325::Orientation(uint8_t rot)
{
	_rotation = rot;
	bool scanV = 0, incH = 0, incV = 0;
	switch (rot)
	{
		case 0: //0 deg
			incV = 1;
			incH = 1;
			break;
		case 1: //90 deg
			scanV = 1;
			incH = 1;
			break;
		case 2: //180 deg
			break;
		case 3: //270 deg
			scanV = 1;
			incV = 1;
			break;
	}
	uint16_t temp = (1<<12)|(incV<<5)|(incH<<4)|(scanV<<3);
	_regWrite(0x0003, temp);
}
void lcdILI9325::GoTo(uint16_t x, uint16_t y)
{
uint16_t tx, ty;
	switch (_rotation)
	{
		case 0:
			tx = x;
			ty = y;
			break;
		case 1:
			tx = y;
			ty = _height-1 - x;
			break;
		case 2:
			tx = _width-1 - x;
			ty = _height-1 - y;
			break;
		case 3:
			tx = _width-1 - y;
			ty = x;
			break;
	}
	_regWrite(0x0020,tx); //Native X pos
	_regWrite(0x0021,ty); //Native Y pos	
}
uint16_t lcdILI9325::GetX(void)
{
	uint16_t x;
	switch (_rotation)
	{
		case 0:
			x = _regRead(0x0020);
			break;
		case 1:
			x = _width-1 - _regRead(0x0021);
			break;
		case 2:
			x = _width-1 - _regRead(0x0020);
			break;
		case 3:
			x = _regRead(0x0021);
			break;
	}
	return x;
}
uint16_t lcdILI9325::GetY(void)
{
	uint16_t y;
	switch (_rotation)
	{
		case 0:
			y = _regRead(0x0021);
			break;
		case 1:
			y = _regRead(0x0020);
			break;
		case 2:
			y = _height-1 - _regRead(0x0021);
			break;
		case 3:
			y = _height-1 - _regRead(0x0020);
			break;
	}
	return y;
}
void lcdILI9325::Clear(uint16_t color)
{	

	const uint16_t w = GetWidth();
	const uint16_t h = GetWidth();
	Fill(0,0, w,h, color);
}
void lcdILI9325::Set(uint16_t x, uint16_t y, uint16_t color)
{
	GoTo(x, y);
	_regWrite(0x0022, color);
}
uint16_t lcdILI9325::Get(uint16_t x, uint16_t y)
{
	GoTo(x, y);
	_regRead(0x0022);
	uint16_t c, tc = _regRead(0x0022);
	c = (tc & 0x07e0);
	c |= (tc >> 11);
	c |= (tc << 11);
	return c;
}

void lcdILI9325::Fill(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color)
{
	if (x1 > x2) std::swap(x1, x2);
	if (y1 > y2) std::swap(x1, x2);
	for	(uint16_t y = y1; y <= y2; y++)
	{
		GoTo(x1, y);
		_cs(0);
		_command(0x0022);
		for (uint16_t x = x1; x <= x2; x++)
		{
			_dataWrite( color );
		}
		_cs(1);
	}
}
void lcdILI9325::Line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color)
{
	int16_t sx, sy;
	uint16_t dx = std::abs(x1 - x2);
	uint16_t dy = std::abs(y1 - y2);
	if (x1 < x2) sx = 1;
	else sx = -1;
	if (y1 < y2) sy = 1;
	else sy = -1;
	int16_t err = dx-dy;
	
	while(1)
	{
		Set(x1,y1, color);
		if (x1 == x2 && y1 == y2) break;
		int16_t e2 = 2 * err;
		if (e2 > -dy)
		{
			err -= dy;
			x1 += sx;
		}
		if (e2 < dx)
		{
			err += dx;
			y1 += sy;
		}
	}
}
void lcdILI9325::Rect(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color)
{
	Line(x1,y1, x2,y1, color);
	Line(x2,y1, x2,y2, color);
	Line(x2,y2, x1,y2, color);
	Line(x1,y2, x1,y1, color);
}
void lcdILI9325::Rect(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color, uint16_t fill)
{
	Fill(x1,y1, x2,y2, fill);
	Rect(x1,y1, x2,y2, color);
}


void lcdILI9325::TextArea(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t color, uint16_t back, const Font *font)
{
	_textX1 = x1;
	_textY1 = y1;
	_textX2 = x2;
	_textY2 = y2;
	
	_textColor = color;
	_backColor = back;
	
	_font = font;
}
void lcdILI9325::PrintString(const char *chars)
{
	for(;(*chars) != 0 ; chars++)
	{
    		_printChar(*chars);
	}
}
void lcdILI9325::PrintFormat( char * fmt, ... )
{
	va_list args;
	char *p; //Pointer to fmt char
	char format = 0; //In format reading mode
	char formatFill = ' '; //Fill character
	char formatSign = 0; //Always sign (+/-)
	char formatReset = 0; //Reset all settings when we are done with a format
	char formatOutput[13]; //Temporary output buffer
	unsigned char i = 0; //For flipping formatOutput
	int formatPadding = 0; //How many charecters the format should use
	
	int formatInt = 0;
	unsigned int formatUnsigned = 0;
	char *formatString;
	
	va_start (args, fmt);
	
	for(p=fmt; *p>0; p++)
	{	
		if (*p == '%')
		{
			format = 1;
			p++;
		}
		

		if(format)
		{
			switch(*p)
			{				
			case 'c':
				formatInt = va_arg( args, int );
				_printChar(formatInt);
				formatReset = 1;
				break;
				
			case 'd':
			case 'i':
				formatInt = va_arg( args, int ); //Load next number from argument list
				if(formatSign && formatInt>=0) _printChar('+'); //Print + if sign is requested and number is poitive
				if(formatInt<0)
				{
					_printChar('-'); //always show - if number i negative
					formatInt = formatInt - formatInt - formatInt; //make number positive to make modulud and division to work
				}
				i = 0;
				if( formatInt == 0 )
				{
					formatOutput[i] = '0'; //If number is zero show that, the function for other numbers won't do it
					i++;
				}
				for(; formatInt; i++) //Convert the number, when formatInt == 0 there is nothing more to convert
				{
					char mod = formatInt % 10; //Extract least significant base 10 digit
					formatOutput[i] = ('0'+mod); //Add the numerical value of '0' to make a character
					formatInt = (formatInt - mod) / 10; //Divide by 10 to create a new least significant digit
				}
				for(int j = 0; j < (formatPadding - i - formatSign); j++) //calculate about of padding needed.
				{
					_printChar(formatFill);
				}
				for( ; i > 0; i--) _printChar(formatOutput[i-1]); //Print the last extracted digit first (that was most significat digit in the original number)
				formatReset = 1; //We are done with this format, clean up
				break;
				
			case 'u':
				formatUnsigned = va_arg( args, unsigned int );
				i = 0;
				if( formatUnsigned == 0 )
				{
					formatOutput[i] = ('0');
					i++;
				}
				for(; formatUnsigned; i++)
				{
					char mod = formatUnsigned % 10;
					formatOutput[i] = ('0'+mod);
					formatUnsigned = (formatUnsigned - mod) / 10;
				}
				for(int j = 0; j < (formatPadding - i); j++) 
				{
					_printChar(formatFill);
				}
				for( ; i > 0; i--) _printChar(formatOutput[i-1]);
				formatReset = 1;
				break;
				
			case 'x':
				formatUnsigned = va_arg( args, unsigned int );
				i = 0;
				if( formatUnsigned == 0 )
				{
					formatOutput[i] = ('0');
					i++;
				}
				for(; formatUnsigned; i++)
				{
					char mod = formatUnsigned % 16;
					if (mod > 9) formatOutput[i] = (char)('a'+mod-10);
					else formatOutput[i] = ('0'+mod);
					formatUnsigned = (formatUnsigned - mod) / 16;
				}
				for(int j = 0; j < (formatPadding - i); j++) 
				{
					_printChar(formatFill);
				}
				for( ; i > 0; i--) _printChar(formatOutput[i-1]);
				formatReset = 1;
				break;
				
			case 'X':
				formatUnsigned = va_arg( args, unsigned int );
				i = 0;
				if( formatUnsigned == 0 )
				{
					formatOutput[i] = ('0');
					i++;
				}
				for(i = 0; formatUnsigned; i++)
				{
					char mod = formatUnsigned % 16;
					if (mod > 9) formatOutput[i] = (char)('A'+mod-10);
					else formatOutput[i] = ('0'+mod);
					formatUnsigned = (formatUnsigned - mod) / 16;
				}
				for(int j = 0; j < (formatPadding - i); j++) 
				{
					_printChar(formatFill);
				}
				for( ; i > 0; i--) _printChar(formatOutput[i-1]);
				formatReset = 1;
				break;
				
			case 'o':
				formatUnsigned = va_arg( args, unsigned int );
				i = 0;
				if( formatUnsigned == 0 )
				{
					formatOutput[i] = ('0');
					i++;
				}
				for(i = 0; formatUnsigned; i++)
				{
					char mod = formatUnsigned % 8;
					formatOutput[i] = ('0'+mod);
					formatUnsigned = (formatUnsigned - mod) / 8;
				}
				for(int j = 0; j < (formatPadding - i); j++) 
				{
					_printChar(formatFill);
				}
				for( ; i > 0; i--) _printChar(formatOutput[i-1]);
				formatReset = 1;
				break;
				
			case 's':
				formatString = va_arg( args, char * );
				PrintString(formatString);
				formatReset = 1;
				break;
			
			case '_':
				formatFill='_';
				break;

			case '0':
				if(formatPadding == 0) formatFill='0';
			case '1' ... '9':
				formatPadding *= 10;
				formatPadding += ((*p) - '0');
				break;
				
			case '+':
				formatSign = 1;
				break;
				
			case '%':
				_printChar('%');
				formatReset = 1;
				break;
			}
			
			if(formatReset)
			{
				//Restore everything
				format = 0;
				formatFill = ' ';
				formatSign = 0;
				formatPadding = 0;
				formatOutput[0] = '\0';
				formatReset = 0;
			}
		}
		else _printChar(*p);
	}
	va_end(args);
}

void lcdILI9325::ClearLine()
{
	Fill( _textX1, _textY, _textX2, _textY + _font->Height, _backColor );
}

//Draw image generated with img2h.py
void lcdILI9325::ImageDraw(const Image img, uint16_t destX, uint16_t destY)
{
	
	for (uint16_t y = 0; y < (*img.Height); y++)
	{
		GoTo(destX, destY+y);
		_cs(0);
		_command(0x0022);
		for (uint16_t x = 0; x < (*img.Width); x++)
		{
			_dataWrite( *(img.Palette+ *(img.Data + (*img.Width)*y + x) ) );
		}
		_cs(1);
	}
}
//Draw mask generated with img2h.py
void lcdILI9325::MaskDraw(const Mask m, uint16_t destX, uint16_t destY)
{
	uint8_t bit = 0;
	uint8_t pixels = 0;
	uint16_t byte = 0;
	for	(uint16_t y = 0; y < (*m.Height); y++)
	{
		GoTo(destX, destY+y);
		_cs(0);
		_command(0x0022);
		for (uint16_t x = 0; x < (*m.Width); x++)
		{
			if (bit == 0)
			{
				pixels = *(m.Data + byte);
				byte++;
				bit = 8;
			}
			bit--;
			if( pixels & (1<<bit)) _dataWrite(_textColor);
			else _dataWrite(_backColor);
		}
		_cs(1);
	}
}
#endif
