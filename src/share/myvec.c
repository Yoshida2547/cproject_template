#include <stdint.h>

void myadd(float *u, float *v, uint32_t n) {
    for (uint32_t i = 0; i<n; i++) {
        u[i] += v[i];
    }
}
