#ifndef PRINTF_WRAPPER_INCLUDED
#define PRINTF_WRAPPER_INCLUDED

#include <stddef.h>

void printf_wrapper(const char *string, ...);
int snprintf_wrapper(char *buffer, size_t size, const char *format, ...);

#endif
