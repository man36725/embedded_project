#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
/**
 * @file activity3.h
 * @author Maneesh
 * @brief Header file for activity3
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
 * 
 */
void TimerWave(void);

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 * @param ADC_val 
 */
void outputbyPWM(uint16_t ADC_val);

#endif
