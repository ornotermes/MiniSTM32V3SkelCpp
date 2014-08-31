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

#ifndef ADS7843_HPP
#define ADS7843_HPP

#include <libopencm3/stm32/f1/rcc.h>
#include <libopencm3/stm32/f1/gpio.h>
#include <libopencm3/stm32/f1/nvic.h>
#include <libopencm3/stm32/f1/bkp.h>
#include <libopencm3/stm32/exti.h>
#include <libopencm3/stm32/spi.h>

#include "lcd-ili9325.hpp" //A touch screen i kinda pointless without a display.
#include "target.hpp" //Target symbol for calibration

class TouchADS7843
{
public:
	typedef enum 
	{
		None,
		Press,
		Release,
		Hold,
		Tap,
	} PenState;
	typedef struct
	{
		uint16_t X;
		uint16_t Y;
		PenState Pen;	
	} Event;

private:
	int _rawX = 0;
	int _rawY = 0;
	bool _rawPen = 0;
	
	uint16_t _x = 0;
	uint16_t _y = 0;
	PenState _pen = None;
	
	bool _calibrated = 0;
	int16_t _scaleX;
	int16_t _scaleY;
	int16_t _offsetX;
	int16_t _offsetY;
	int _regScaleX = BKP_DR10;
	int _regScaleY = BKP_DR9;
	int _regOffsetX = BKP_DR8;
	int _regOffsetY = BKP_DR7;
	
	void _cs(bool sel);
	uint16_t _getPos(bool y);
	
public:
	TouchADS7843();
	Event Task(void);
	void Calibrate(lcdILI9325 *disp);
	void Calibrate(lcdILI9325 disp);
	void WriteRTC(void);
	bool ReadRTC(void);

};

#include "touch-ads7843.cpp"

#endif
