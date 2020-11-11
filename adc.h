/* 
 * File:   adc.h
 * Author: Stefan Velbl
 *
 * Created on 22 October 2020, 20:09
 */

#ifndef ADC_H
#define	ADC_H
#include "system.h"

//A/D converter interface for reading of the A/D buffer values.
uint16_t ADC_v_Read(uint8_t);

//A/D converter initialization interface.
void ADC_v_Init(void);

#endif	/* ADC_H */

