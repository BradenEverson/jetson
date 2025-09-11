#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <jetgpio.h>

int main() {
    int32_t status = gpioInitialise();
    if (status < 0) {
        printf("Ut oh... oh no %d\n", status);
        exit(status);
    }

    printf("GPIO Initialized :)\n");

    status = gpioSetMode(8, JET_OUTPUT);
    if (status < 0) {
        printf("Setting pin to output failed with status code %d\n", status);
        exit(status);
    }

    gpioWrite(8, 1);
}
