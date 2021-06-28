#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdio.h>

#include "type.h"

#define LINE_LENGTH 20
#define PRINT_ARRAY_FRAME_WRAP(count) PRINT_ARRAY_FRAME(getTypeFmt(type), count, arrayName, type)
#define PRINT_ARRAY_FRAME(format, count, arrayName, type) \
    printStartLine(arrayName, type);                      \
    PRINT_ARRAY_FOR(format, count)                        \
    printEndLine();

#define PRINT_ARRAY_FOR(format, count)          \
    for (size_t i = 0; i < (count); i++) {      \
        printf(strcat(format, "\n"), array[i]); \
    }                                           \
    free(format);
#define GET_ARRAY_SIZE(x, type) (sizeof(x) / sizeof(type))

#define PRINT_ARRAY(x, y) printArray(x, GET_ARRAY_SIZE(x, short), GET_ARRAY_SIZE(x, int), GET_ARRAY_SIZE(x, float), GET_ARRAY_SIZE(x, double), GET_ARRAY_SIZE(x, char), y, #x);

void printArray(void* array, int shortCount, int intCount, int floatCount, int doubleCount, int charCount, TYPE type, char arrayName[]);
void printStartLine(char name[], TYPE type);
void printEndLine();

#endif
