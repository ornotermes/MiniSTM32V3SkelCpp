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
/* Set STM32 to 72 MHz. */
void clock_setup(void)
{
	rcc_clock_setup_in_hse_8mhz_out_72mhz();

	/* Enable GPIOC clock. */
	rcc_peripheral_enable_clock(&RCC_APB2ENR, RCC_APB2ENR_IOPCEN);
}

class GpioClass{
	uint32_t _port;
	uint16_t _pin;
public:
	void Set(bool);
	bool Get(void);
	void Toggle(void);
	void Mode(uint8_t, uint8_t);
	GpioClass(uint32_t, uint16_t, uint8_t, uint8_t);
};
void GpioClass::Set(bool state)
{
	if (state) gpio_set(_port, _pin);
	else gpio_clear(_port, _pin);
}
bool GpioClass::Get(void)
{
	return (bool)gpio_get(_port, _pin);
}
void GpioClass::Toggle(void)
{
	gpio_toggle(_port, _pin);
}
void GpioClass::Mode(uint8_t mode, uint8_t conf)
{
	gpio_set_mode(_port, mode, conf, _pin);
}
GpioClass::GpioClass(uint32_t port, uint16_t pin, uint8_t mode, uint8_t conf)
{
	_port = port;
	_pin = pin;
	Mode(mode, conf);
}


int main(void)
{
	int i;

	clock_setup();
	
	GpioClass BackLight(GPIOC, GPIO12, GPIO_MODE_OUTPUT_50_MHZ, GPIO_CNF_OUTPUT_PUSHPULL);

	//Blink the LED (PC12) on the board. 
	while (1) {
		BackLight.Toggle();
		for (i = 0; i < 4000000; i++)	// Wait a bit.
			;;
	}

	return 0;
}
