#include "printArray.h"

#include <stdio.h>
void printArray(void *p, int shortCount, int intCount, int floatCount, int doubleCount, int charCount, TYPE type) {
    switch (type) {
        case SHORT: {
            short *array = (short *)p;
            PRINTF_FOR(%d, doubleCount);
        } break;
        case INT: {
            int *array = (int *)p;
            PRINTF_FOR(%d, intCount);
        } break;
        case FLOAT: {
            float *array = (float *)p;
            PRINTF_FOR(%f, floatCount);
        } break;
        case DOUBLE: {
            double *array = (double *)p;
            PRINTF_FOR(%lf, doubleCount);
        } break;
        case CHAR: {
            char *array = (char *)p;
            PRINTF_FOR(%c, doubleCount);
        } break;
        default:
            break;
    }
}
