#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @file activity2.h
 * @author Maneesh
 * @brief Header file for activity2
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

/**
 * @brief A macro to set ADC interrupt flag
 * 
 */
#define SET_ADC_INTERRUPT_FLAG ADCSRA|=(1<<ADIF)

/**
 * @brief A macro to check if interrupt has not occured
 * 
 */
#define ADC_INTERRUPT_NOT !(ADCSRA & (1<<ADIF))
/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void Init_ADC();

/**
 * @brief A function to receive temperature sensor inputs from analog pin and output it to a register .
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);




#endif
