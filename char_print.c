#include "main.h"

/*
 * char_print - prints the character
 * @arguments: the list of arguments
 * @flags: checks for active flags
 * return: the number of characters printed
 *
 */

int char_print(va_list arguments, int flags)
{
        char c = va_arg(arguments, int);

	(void)flags;
        return (write(1, &c, 1));
}

