#include "printf_wrapper.h"
#include <stdio.h>
#include <stdarg.h>

void printf_wrapper(const char *format, ...)
{
    va_list args;               // Not sure how to initialize a va_list to 0. It appears to be a structure?

    va_start(args, format);     // Pass in the last required argument (in this case, format) so it knows where the varargs start
    vprintf(format, args);
    va_end(args);
}
