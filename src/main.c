#include <stdio.h>
#include <stdlib.h>
#include "../include/mymath.h"
#include <myvec.h>

int main(int argc, char **argv) {
    printf("Hello, World\n");
    printf("e to the 2 is %f\n", myexp(2));

    float a[3] = {1,2,3};
    float b[3] = {4,2,3};

    myadd(a, b, 3);

    for(int i = 0; i<3; i++) {
        printf("%f\n", a[i]);
    }

    return EXIT_SUCCESS;
}
