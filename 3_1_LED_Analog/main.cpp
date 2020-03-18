#include "mbed.h"

AnalogOut Aout(DAC0_OUT);
AnalogIn Ain(A0);

int main() {
	while(true) {
		Aout = Ain;
	}
}