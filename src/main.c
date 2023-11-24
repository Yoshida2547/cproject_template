#include <stdio.h>
#include <stdlib.h>
#include <myvec.h>

int main(int argc, char **argv) {
    printf("Hello, World\n");

    float a[3] = {1,2,3};
    float b[3] = {4,2,3};

    myadd(a, b, 3);

    for(int i = 0; i<3; i++) {
        printf("%f\n", a[i]);
    }

    return EXIT_SUCCESS;
}
