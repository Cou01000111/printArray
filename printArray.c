#include "printArray.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printArray(void *p, int shortCount, int intCount, int floatCount, int doubleCount, int charCount, TYPE type, char arrayName[]) {
    switch (type) {
        case SHORT: {
            short *array = (short *)p;
            PRINT_ARRAY_FRAME_WRAP(shortCount);
        } break;
        case INT: {
            int *array = (int *)p;
            PRINT_ARRAY_FRAME_WRAP(intCount);
        } break;
        case FLOAT: {
            float *array = (float *)p;
            PRINT_ARRAY_FRAME_WRAP(floatCount);
        } break;
        case DOUBLE: {
            double *array = (double *)p;
            PRINT_ARRAY_FRAME_WRAP(doubleCount);
        } break;
        case CHAR: {
            char *array = (char *)p;
            PRINT_ARRAY_FRAME_WRAP(charCount);
        } break;
        default:
            break;
    }
}

void printStartLine(char name[], TYPE type) {
    printf("-");
    char *typeName = getTypeStr(type);
    printf("[%s:%s]", name, typeName);
    for (size_t i = 0; i < LINE_LENGTH - strlen(name) - strlen(typeName) - 3; i++) {
        printf("-");
    }
    free(typeName);
    printf("\n");
}

void printEndLine() {
    for (size_t i = 0; i < LINE_LENGTH; i++) {
        printf("-");
    }
    printf("\n");
}
