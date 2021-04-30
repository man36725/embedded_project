/**
 * @file ActivityOne.c
 * @author Maneesh
 * @brief Activity one of embedded systems
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity1.h"

int main(void)
{
    led_init();
    Init_ADC(); //Initialise the ADC
    uint16_t temp;
    // Insert code

while(1)
    {
       if(BUTTON_SENSOR_ON) //Checking if the input bit to 7th bit of pinB is made 0 from 1 by pressing led
        {

            if(HEATER_ON) //Checking if the input bit to 6th bit of pinB is made 0 from 1 by pressing led
            {
                _delay_ms(20);
                SET_LED; //make 0th bit of port B as 1, makes led glow
                temp = Read_ADC(0);
                _delay_ms(20);

            }
            else
            {
                CLEAR_LED; // make led off
            }
        }
        else
        {

                CLEAR_LED; //make led off
        }
    }

 return 0;
}
