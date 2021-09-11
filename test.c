#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "printArray.h"

int main() {
    short arrayShort[] = {1, 2, 65, 32, 56, 412, 4,  75, 3, SHRT_MAX, SHRT_MIN};
    int arrayInt[] = {1, 2, 65, 32, 346, 756, 56, 451, 412, 4, 34567, 456, 75, 3, INT_MAX,INT_MIN};
    float arrayFloat[] = {1, 2, 65, 32, 346, 756, 56, 451, 412, 4, 34567, 456, 75, 3};
    double arrayDouble[] = {1, 2, 65, 32, 346, 756, 56, 451, 412, 4, 34567, 456, 75, 3};
    PRINT_ARRAY(arrayShort, SHORT);
    PRINT_ARRAY(arrayInt, INT);
    PRINT_ARRAY(arrayFloat, FLOAT);
    PRINT_ARRAY(arrayDouble, DOUBLE);
    return 0;
}
