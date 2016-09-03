#include "util.h"
#include <stdio.h>
#include <stdarg.h> 

void checkprint(const char* file, const int line, int condition, const char* formatstr, ...)
{
    va_list args;
    if(condition)
    {
        fprintf(stderr, "[%s: Line %d]", file, line);
        fprintf(stderr, formatstr, args);

    }
}