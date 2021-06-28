#include "type.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* getTypeStr(TYPE type) {
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
        case CHAR:
            strcpy(str, "char");
            break;
        default:
            break;
    }
    return str;
}

char* getTypeFmt(TYPE type) {
    char* str = (char*)malloc(sizeof(char) * 3);
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
        case CHAR:
            strcpy(str, "\%c");
            break;
        default:
            break;
    }
    return str;
}
