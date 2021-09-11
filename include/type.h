#ifndef TYPE_H
#define TYPE_H

typedef enum { SHORT, INT, LONG, FLOAT, DOUBLE } PRINT_ARRAY_TYPE;
char* getTypeStr(PRINT_ARRAY_TYPE type);
char* getTypeFmt(PRINT_ARRAY_TYPE type);

#endif
