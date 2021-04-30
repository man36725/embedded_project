#include <avr/io.h>
#include "activity4.h"
/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01); // 8 bit size of data
    UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); //enable rx and tx of uart with interrupts

}


/**
 * @brief A function to read characters coming from other UART port
 * 
 * @return char 
 */
char UARTreadchar(){

while(UART_DATA_NOT_RECEIVED){

}

return UDR0;

}


/**
 * @brief A function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwrite(char data){

while(UART_DATA_NOT_WRITTEN){

}

UDR0 = data;

}
