/**
 * @file activity1.c
 * @author Maneesh
 * @brief blink an led 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include <avr/io.h>
void led_init()
{
DDRB|=(1<<PB0); //set led as output port
DDRD&=~(1<<PD0); //clear bit 6 of DDR B
PORTD|=(1<<PD0); //Set bit 6 of Port B
DDRD&=~(1<<PD1); //clear bit 7 of DDR B
PORTD|=(1<<PD1);//Set bit 7 of DDR B
}
