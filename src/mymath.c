#include "../include/mymath.h"

float myexp(float x) {
    float a = 1;
    float a_sum = a;
    
    for(int i = 1; i<MAX_ITERATE; i++) {
        a *= x/i;
        a_sum += a;
    }

    return a_sum;
}
