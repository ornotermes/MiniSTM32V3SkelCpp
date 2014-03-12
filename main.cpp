/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2009 Uwe Hermann <uwe@hermann-uwe.de>
 * Copyright (C) 2014 Rikard Lindström <ornotermes@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "libopencm3/stm32/f1/rcc.h"
#include "libopencm3/stm32/f1/gpio.h"

#include "lcd-ili9325.hpp"
#include "font6x12.hpp"
/* Set STM32 to 72 MHz. */
void clock_setup(void)
{
	rcc_clock_setup_in_hse_8mhz_out_72mhz();

	/* Enable GPIOC clock. */
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_IOPAEN);
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_IOPBEN);
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_IOPCEN);
}
int main(void)
{
	clock_setup();
	
	lcdILI9325 Display(GPIOB, GPIOC, GPIOC, GPIO8, GPIOC, GPIO9, GPIOC, GPIO10, GPIOC, GPIO11, GPIOC, GPIO12); //PC8=CS, PC9=RS, PC10=WR, PC11=RD, PC12=LIGHT
	Display.Light(1);
	Display.Orientation(3);
	Display.Clear(Color::Blue);
	Display.Line(0,0,320,0, Color::White);
	Display.Line(320,0,320,240, Color::White);
	Display.Line(0,0,320,240, Color::White);
	Display.Line(100,100,200,100, Color::Red);
	Display.Line(200,100,200,200, Color::Red);
	Display.Line(200,200,100,100, Color::Red);
	Display.Rect(25,25, 225,225, Color::Green);
	Display.Rect(50,50, 175,175, Color::Black, Color::White);
	if(Font6x12.Space == 1) Display.Fill(0,0, 16,16, Color::Red);
	while(1){;}
	return 0;
}
