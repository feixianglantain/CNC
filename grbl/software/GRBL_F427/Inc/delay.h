#ifndef __delay_h__
#define __delay_h__

#include "stdint.h"

void delay_init(uint8_t SYSCLK);


void _delay_us(uint32_t us);

void _delay_ms(uint16_t ms);









#endif

