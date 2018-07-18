#include "printf_wrapper.h"

int main(void)
{
    printf_wrapper("This is a print statement\n");
    printf_wrapper("This is a fancy print statement: strings (%s) and integers (%d)\n", "Hello World!", 42);
    return 0;
}
