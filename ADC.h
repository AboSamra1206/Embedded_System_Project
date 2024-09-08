/*
 * ADC.h
 *
 * Created: 9/7/2024 8:43:22 AM
 *  Author: AHMED SAMIR
 */ 

#ifndef ADC_H_
#define ADC_H_


#include <avr/io.h>
#include "std_macros.h"

void ADC_init(void);
uint16_t ADC_read(void);


#endif /* ADC_H_ */