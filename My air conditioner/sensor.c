#include "sensor.h"
#include <stdio.h>

int32_t tempVal[10] = { 12,34,40,24,37,22,10,5,26,22 };


void SensorInit(void)
{
	printf("SENSOR ON!\n");
}

int32_t SensorGetTempValue(void)
{
	static int32_t counter = 0;
	int32_t temp = 0;

	temp = tempVal[counter];
	counter++;

	if (counter == 10)
		counter = 0;

	return temp;
}
