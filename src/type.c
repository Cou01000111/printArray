#include "type.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* get_type_str(PRINT_ARRAY_TYPE type) {
    char* str = (char*)malloc(sizeof(char) * 7);
    switch (type) {
        case SHORT:
            strcpy(str, "short");
            break;
        case INT:
            strcpy(str, "int");
            break;
        case LONG:
            strcpy(str, "long");
            break;
        case FLOAT:
            strcpy(str, "float");
            break;
        case DOUBLE:
            strcpy(str, "double");
            break;
        default:
            break;
    }
    return str;
}

char* get_type_fmt(PRINT_ARRAY_TYPE type) {
    char* str = (char*)malloc(sizeof(char) * 4);
    switch (type) {
        case SHORT:
            strcpy(str, "\%d");
            break;
        case INT:
            strcpy(str, "\%d");
            break;
        case LONG:
            strcpy(str, "\%l");
            break;
        case FLOAT:
            strcpy(str, "\%f");
            break;
        case DOUBLE:
            strcpy(str, "\%lf");
            break;
        default:
            break;
    }
    return str;
}
