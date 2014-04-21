/*
* globals.h
*
* Created on: Feb 6, 2013
* Author: Steven Kordell, Cody Wall-Epstein, Jiaqi ren
*
* Defines and declares the global struct.
*
*/
#ifndef GLOBALS_H_
#define GLOBALS_H_

#include "main.h"

#define MAX_INDEX 400

typedef struct {
	volatile unsigned short ADCValue;
	volatile unsigned long int timeStamp;
	volatile uint8_t sampleDataAvailable;
	uint8_t PIDTimerMaxCount;
	volatile uint8_t PIDTimerCurrentCount;
	volatile uint16_t highLinkSetPoint;
	volatile uint16_t lowLinkSetPoint;
	uint16_t ADCSampleAllChannels;
	volatile uint16_t ADCValues[8];
	volatile int16_t highLinkPIDOut;
	volatile int16_t lowLinkPIDOut;
	volatile uint32_t pointRecordMaxCount;
	volatile uint32_t pointRecordCurrentCount;
	volatile uint16_t lastIndex;
	volatile uint16_t topIndex;
	volatile float lowLinkAngles[MAX_INDEX];
	volatile float highLinkAngles[MAX_INDEX];
	volatile float replayingData;
} Globals;



extern Globals globals; // declaration

void initGlobals();

#endif /* GLOBALS_H_ */
