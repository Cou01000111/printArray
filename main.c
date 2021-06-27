#include <stdio.h>
#include <stdlib.h>

#include "printArray.h"

int main() {
    int array1[] = {1, 2, 65, 32, 346, 756, 56, 451, 412, 4, 34567, 456, 75, 3};
    float array2[] = {1, 2, 65, 32, 346, 756, 56, 451, 412, 4, 34567, 456, 75, 3};
    double array3[] = {1, 2, 65, 32, 346, 756, 56, 451, 412, 4, 34567, 456, 75, 3};
    PRINT_ARRAY(array1,INT);
    PRINT_ARRAY(array2,FLOAT);
    PRINT_ARRAY(array3,DOUBLE);
    return 0;
}
