/*	Author: jlee434
 *  Partner(s) Name: Shiyou Wang
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    	/* Insert DDR and PORT initializations */
    	DDRB = 0xFF;
	PORTB = 0x00; 
    	/* Insert your solution below */
    	while (1) {
		PORTB = PINA ==  0x01;
    	}
    return 1;
}
