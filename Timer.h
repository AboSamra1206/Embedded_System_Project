/*
 * Timer.h
 *
 * Created: 9/7/2024 8:46:28 AM
 *  Author: AHMED SAMIR
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "std_macros.h"

void timer1_init();
void timer0_init();
void timer1_INT_disable();
void timer1_INT_enable();

#endif /* TIMER_H_ */