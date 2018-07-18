#include "printf_wrapper.h"
#include <stdio.h>
#include <stdarg.h>

void printf_wrapper(const char *string, ...)
{
    va_list vararg_list;    // Not sure how to initialize this. It appears to be a structure?

    va_start(vararg_list, string);
    printf("%s", string);
    va_end(vararg_list);
}
