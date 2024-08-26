#include "main.h"

/*
 * percent_print - prints a percentage sign
 * @arguments: does not use arguments
 * @flags: checks for active flags
 * return the number of characters printed
 *
 */

int percent_print(va_list argumentis, int flags)
{
        (void)arguments;
	(void)flags;
        return (write(1, "%", 1));
}


