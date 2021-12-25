#ifndef __DISPLAY__
#define __DISPLAY__

#include <stdint.h>

void DisplayInit(void);
void DisplayPowerOn(void);
void DisplayPowerOff(void);
void DisplayWrtiteToScreen(int32_t num);

#endif