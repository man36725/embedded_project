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
SET_LED_AS_OUTPUT; //set led as output port
SET_BUTTON_AS_INPUT; //clear bit 6 of DDR B
PULLUP_BUTTON; //Set bit 6 of Port B
SET_HEATER_AS_INPUT; //clear bit 7 of DDR B
PULLUP_HEATER;//Set bit 7 of DDR B
}
