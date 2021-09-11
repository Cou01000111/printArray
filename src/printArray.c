#include "printArray.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printArray(void *p, int count, PRINT_ARRAY_TYPE type, char arrayName[]) {
    switch (type) {
        case SHORT: {
            short *array = (short *)p;
            PRINT_ARRAY_FRAME_WRAP(count);
        } break;
        case INT: {
            int *array = (int *)p;
            PRINT_ARRAY_FRAME_WRAP(count);
        } break;
        case FLOAT: {
            float *array = (float *)p;
            PRINT_ARRAY_FRAME_WRAP(count);
        } break;
        case DOUBLE: {
            double *array = (double *)p;
            PRINT_ARRAY_FRAME_WRAP(count);
        } break;
        default:
            break;
    }
}

void printStartLine(char name[], PRINT_ARRAY_TYPE type) {
    printf("-");
    char *typeName = getTypeStr(type);
    printf("[%s:%s]", name, typeName);
    for (size_t i = 0; i < LINE_LENGTH - strlen(name) - strlen(typeName) - 3;
         i++) {
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
