#include "display.h"
#include <stdio.h>

void DisplayInit(void)
{
	printf("DISPLAY INIT!\n");
}

void DisplayPowerOn(void)
{
	printf("DISPLAY ON!\n");
}

void DisplayPowerOff(void)
{
	printf("DISPLAY POWER OFF!\n");
}

void DisplayWrtiteToScreen(int32_t num)
{
	printf("******************\n");
	printf("TEMPRATURE: %d\n", num);
}