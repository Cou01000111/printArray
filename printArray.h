#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdio.h>

#include "type.h"

#define GET_ARRAY_SIZE(x,type) (sizeof(x) / sizeof(type))
#define PRINTF_FOR(format, count) for (size_t i = 0; i < (count); i++) { printf(#format"\n", array[i]);}

#define PRINT_ARRAY(x, y) printArray(x, GET_ARRAY_SIZE(x,short), GET_ARRAY_SIZE(x,int), GET_ARRAY_SIZE(x,float), GET_ARRAY_SIZE(x,double),GET_ARRAY_SIZE(x,char), y);

void printArray(void* array, int shortCount, int intCount, int floatCount, int doubleCount, int charCount, TYPE type);

#endif
