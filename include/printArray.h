#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdio.h>

#include "type.h"

#define LINE_LENGTH 20
#define PRINT_ARRAY_FRAME_WRAP(count) \
    PRINT_ARRAY_FRAME(getTypeFmt(type), count, arrayName, type)
#define PRINT_ARRAY_FRAME(format, count, arrayName, type) \
    printStartLine(arrayName, type);                      \
    PRINT_ARRAY_FOR(format, count)                        \
    printEndLine();

#define PRINT_ARRAY_FOR(format, count)             \
    for (size_t i = 0; i < (size_t)(count); i++) { \
        printf(strcat(format, "\n"), array[i]);    \
    }                                              \
    free(format);
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))

#define PRINT_ARRAY(x, y) printArray(x, ARRAY_SIZE(x), y, #x);

void printArray(void *p, int count, PRINT_ARRAY_TYPE type, char arrayName[]);
void printStartLine(char name[], PRINT_ARRAY_TYPE type);
void printEndLine();

#endif
