#ifndef PRINT_ARRAY_H
#define PRINT_ARRAY_H

#include <stdio.h>

#include "type.h"

#define LINE_LENGTH 20
#define PRINT_ARRAY_FRAME_WRAP(count) \
    PRINT_ARRAY_FRAME(get_type_fmt(type), count, arrayName, type)
#define PRINT_ARRAY_FRAME(format, count, arrayName, type) \
    print_start_line(arrayName, type);                    \
    PRINT_ARRAY_FOR(format, count)                        \
    print_end_line();

#define PRINT_ARRAY_FOR(format, count)             \
    for (size_t i = 0; i < (size_t)(count); i++) { \
        printf(strcat(format, "\n"), array[i]);    \
    }                                              \
    free(format);
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))

#define PRINT_ARRAY(x, y) print_array(x, ARRAY_SIZE(x), y, #x);

void print_array(void *p, int count, PRINT_ARRAY_TYPE type, char arrayName[]);
void print_start_line(char name[], PRINT_ARRAY_TYPE type);
void print_end_line();

#endif
