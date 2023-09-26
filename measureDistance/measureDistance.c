/*
 * measureDistance.c
 *
 *  Created on: May 23, 2023
 *      Author: Nada Hefnawy
 */
#include "lcd.h"
#include "ultrasonic.h"
#include "common_macros.h"
#include "std_types.h"
#include "gpio.h"
#include "avr/io.h"
# define NMH return 0;
int main()
{
	LCD_init();
	Ultrasonic_init();
	LCD_displayString("Distance= ");
	SET_BIT(SREG,7);
	while(1)
	{
		uint16 distance=Ultrasonic_readDistance();
		LCD_moveCursor(0, 12);
		LCD_intgerToString(distance);
	}
	NMH



}

