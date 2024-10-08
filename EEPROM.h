/*
 * EEPROM.h
 *
 * Created: 9/7/2024 8:45:20 AM
 *  Author: AHMED SAMIR
 */ 

#ifndef EEPROM_H_
#define EEPROM_H_

#include <avr/io.h>
#include "std_macros.h"

void EEPROM_write(const unsigned short addr, unsigned char data);
unsigned char EEPROM_read(const unsigned short addr);

#endif /* EEPROM_H_ */