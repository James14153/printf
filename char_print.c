#include "main.h"

/*
 * char_print - prints the character
 * @arguments: the list of arguments
 *
 * return: the number of characters printed
 *
 */

int char_print(va_list arguments)
{
        char c = va_arg(arguments, int);
        return (write(1, &c, 1));
}

