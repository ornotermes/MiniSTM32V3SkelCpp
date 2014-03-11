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
 
#ifndef LCD_ILI9325_H
#define LCD_ILI9325_H

//---- Includes headers ------------------------------------------------------//

#include <libopencm3/stm32/f1/gpio.h>

namespace Color
{
	const uint16_t Black =		0x0000;
	const uint16_t White =		0x0000;
	const uint16_t Gray =		0x39ee;
	const uint16_t Red =		0xf800;
	const uint16_t DarkRed =	0x3800;
	const uint16_t Green =		0x07e0;
	const uint16_t DarkGreen = 	0x01e0;
	const uint16_t Blue =		0x001f;
	const uint16_t DarkBlue =	0x000e;
	const uint16_t Yellow =		0xffe0;
	const uint16_t DarkYellow =	0x39e0;
	const uint16_t Cyan =		0x07ff;
	const uint16_t DarkCyan =	0x01ee;
	const uint16_t Magenta =	0xf81f;
	const uint16_t DarkMagenta =	0x3807;
	const uint16_t Amber = 		0xfd60;
	uint16_t FromRGB(uint8_t red, uint8_t green, uint8_t blue);
};

class lcdILI9325{
	const uint16_t _width = 240;
	const uint16_t _height = 320;
	uint8_t	_rotation = 0;
	uint16_t _model;
	
	uint32_t _portMSB, _portLSB, _portCS, _portRS, _portWR, _portRD, _portLED;
	uint16_t _pinCS, _pinRS, _pinWR, _pinRD, _pinLED;
	
	inline void _cs(bool state);
	inline void _rs(bool state);
	inline void _wr(bool state);
	inline void _rd(bool state);
	inline void _dir(bool dir);
	inline uint16_t _read(void);
	inline void _write(uint16_t data);
	
	void _command(uint16_t command);
	void _dataWrite(uint16_t command);
	uint16_t _dataRead(void);
	
	void _regWrite(uint16_t reg, uint16_t data);
	uint16_t _regRead(uint16_t reg);
	
public:
	lcdILI9325(uint32_t portMSB, uint32_t portLSB, uint32_t portCS, uint16_t pinCS, uint32_t portRS, uint16_t pinRS, uint32_t portWR, uint16_t pinWR, uint32_t portRD, uint16_t pinRD, uint32_t portLED, uint16_t pinLED);
	void Light(bool state);
	uint16_t GetWidth(void);
	uint16_t GetHeight(void);
	void Orientation(uint8_t rot);
	void GoTo(uint16_t x, uint16_t y);
	uint16_t GetX(void);
	uint16_t GetY(void);
	void Clear(uint16_t color);
	void Set(uint16_t x, uint16_t y, uint16_t color);
};

#include "lcd-ili9325.cpp"

#endif
