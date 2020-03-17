#include "mbed.h"

Serial pc(USBTX, USBRX);
AnalogIn Ain(A0);
float ADCdata;

int main() {
    while(true) {
        ADCdata = Ain;
        wait(0.5);
        pc.printf("%1.3f\n", ADCdata);
    }
}