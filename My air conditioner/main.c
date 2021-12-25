#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "display.h"
#include "motor.h"
#include "sensor.h"


void delay();
int main() {
	int32_t temp;
	
	DisplayInit();
	MotorInit();
	SensorInit();
	DisplayPowerOn();
	while (1) {
		temp = SensorGetTempValue();
		DisplayWrtiteToScreen(temp); 

		if (temp > 25) {
			MotorPowerOn();
		}
		else {
			MotorPowerOff();
		}
		delay();
		printf("\n\n");
	}
	

	return 0;
}

void delay() {

	for (int64_t i = 0; i < 1000000000; i++);


}









