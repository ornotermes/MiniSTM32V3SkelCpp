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

#ifndef BUTTON_CPP
#define BUTTON_CPP
Button::Button(int gpio, uint16_t pin)
{
	_gpio = gpio;
	_pin = pin;
	gpio_set_mode(_gpio, GPIO_MODE_INPUT, GPIO_CNF_INPUT_PULL_UPDOWN, _pin);
}
uint32_t Button::Task(void)
{
	if(!gpio_get(_gpio, _pin)) _count++;
	else _count = 0;
	return _count;
}
#endif
