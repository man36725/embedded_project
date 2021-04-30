#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity4.h
 * @author 
 * @brief Header file for activity4
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>

#define UBRR_VALUE 103
/**
 * @brief A macro to check if the data is received into the buffer or not
 * 
 */
#define UART_DATA_NOT_RECEIVED !(UCSR0A & (1<<RXC0))

/**
 * @brief A macro to check if the data is not written into the buffer
 * 
 */
#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))

/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t UBRR_VALUE);

/**
 * @brief A function to read characters coming from other UART port
 * 
 * @return char 
 */
char UARTreadchar();

/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data);


#endif
