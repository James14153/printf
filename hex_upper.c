#include "main.h"

/*
 * hex_upper_print - converts a digit to hexadecimal form
 * in uppercase
 * @arguments: takes a list of arguments
 *
 * return the number of printed characters
 *
 */

int hex_upper_print(va_list arguments)
{
        int a = 0;
        int b;
        int k = 0;
        char array[50];
        char *str = "0123456789ABCDEF";
        unsigned int number = va_arg(arguments, unsigned int);

        if (number == 0)
        {
                array[a++] = '0';
        }
        else
        {
                while (number > 0)
                {
                        array[a++] = str[number % 16];
                        number /= 16;
                }
        }

        for (b = a - 1; b >= 0; b--)
        {
                write(1, &array[b], 1);
                k++;
        }
        return k;
}

