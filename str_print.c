#include "main.h"

/*
 * str_print - prints a string
 * @arguments: the list of arguments to be passed
 *
 * return: the number of chracters printed
 *
 */

int str_print(va_list arguments)
{
        char *str = va_arg(arguments, char *);
        int j = 0;

        if (str == NULL)
                str = "(This is a null string)";
        while (str[j])
        {
                write(1, &str[j], 1);
                j++;
        }
        return j;
}

