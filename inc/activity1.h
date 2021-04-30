#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file activity1.h
 * @author Maneesh
 * @brief Header file for activity1
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/**
 * Macros
 */
#include <avr/io.h>

/**
 * @brief A macro to check if the button is pressed or not. If pressed, the input to 1th bit of PIND is 0.
 *
 */
#define BUTTON_SENSOR_ON !(PIND&(1<<PD0))

/**
 * @brief A macro to check if the heater is pressed or not. If pressed, the input to 0th bit of PIND is 0.
 *
 */
#define HEATER_ON !(PIND&(1<<PD1))

/**
 * @brief A macro to turn on the LED by setting 0th bit of PORTB
 *
 */
#define SET_LED PORTB|=(1<<PB0)

/**
 * @brief A macro to turn off the LED by clearing the 0th bit of PORTB
 *
 */
#define CLEAR_LED PORTB&=~(1<<PB0)



/**
 * @brief A function to operate the button and heater sensor
 *
 */
void led_init();


#endif // PORT_H_INCLUDED
