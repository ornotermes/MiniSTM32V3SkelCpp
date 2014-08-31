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

#ifndef LED_CPP
#define LED_CPP
Led::Led(int gpio, uint16_t pin)
{
	_gpio = gpio;
	_pin = pin;
	gpio_set_mode(_gpio, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, _pin);
	gpio_set(_gpio, _pin);
}
void Led::Toggle(void)
{
	gpio_toggle(_gpio, _pin);
}
void Led::Set(bool state)
{
	if(state) gpio_set(_gpio, _pin);
	else gpio_clear(_gpio, _pin);
}
#endif
