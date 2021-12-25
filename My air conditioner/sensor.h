#ifndef __SENSOR__
#define __SENSOR__

#include <stdint.h>	

void SensorInit(void);
int32_t SensorGetTempValue(void);
#endif