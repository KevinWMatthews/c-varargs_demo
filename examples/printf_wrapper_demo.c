#include "printf_wrapper.h"
#include <string.h>

int main(void)
{
    printf_wrapper("This is a print statement\n");
    printf_wrapper("This is a fancy print statement: strings (%s) and integers (%d)\n", "Hello World!", 42);

    char buffer[1024] = {0};
    int len = 0;
    len = snprintf_wrapper(buffer, sizeof(buffer), "This is a string");
    printf_wrapper("buffer (%d): %s\n", len, buffer);

    memset(buffer, 0, sizeof(buffer));
    len = snprintf_wrapper(buffer, sizeof(buffer), "This is a string with specifiers. Buffer length: %d", sizeof(buffer));
    printf_wrapper("buffer (%d): %s\n", len, buffer);

    return 0;
}
