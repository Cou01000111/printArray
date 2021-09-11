#ifndef TYPE_H
#define TYPE_H

typedef enum { SHORT, INT, LONG, FLOAT, DOUBLE } PRINT_ARRAY_TYPE;
char* get_type_str(PRINT_ARRAY_TYPE type);
char* get_type_fmt(PRINT_ARRAY_TYPE type);

#endif
