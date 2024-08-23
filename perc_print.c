#include "main.h"

/*
 * percent_print - prints a percentage sign
 * @arguments: does not use arguments
 *
 * return the number of characters printed
 *
 */

int percent_print(va_list arguments)
{
        (void)arguments;
        return (write(1, "%", 1));
}


