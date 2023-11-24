#include <myvec.h>

void myadd(float *u, float *v, uint32_t n) {
    for (int i = 0; i<n; i++) {
        u[i] += v[i];
    }
}
