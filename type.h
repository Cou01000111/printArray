#ifndef TYPE_H
#define TYPE_H

typedef enum { SHORT,
               INT,
               LONG,
               FLOAT,
               DOUBLE,
               CHAR } TYPE;
char* getTypeStr(TYPE type);
char* getTypeFmt(TYPE type);

#endif
