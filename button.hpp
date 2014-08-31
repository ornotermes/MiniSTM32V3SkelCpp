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

#ifndef BUTTON_HPP
#define BUTTON_HPP
class Button
{
	int _gpio;
	uint16_t _pin;
	uint32_t _count = 0;

public:
	Button(int gpio, uint16_t pin);
	uint32_t Task(void);
};
#include "button.cpp"
#endif
