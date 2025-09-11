#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <jetgpio.h>

int main() {
    int32_t init = gpioInitialise();
    if (init < 0) {
        printf("Ut oh... oh no %d\n", init);
        exit(init);
    }

    printf("GPIO Initialized :)\n");
}
