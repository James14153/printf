#include "main.h"
#include <limits.h>
#include <string.h>

/*
 * num_print - printsboth positive and negative numbers
 * @arguments: takes a list of arguments
 * @flags: checks for active flags
 * return the number of characters printed
 */

int num_print(va_list arguments, int flags)
{
        char array[50];
        int a = 0;
        int k = 0;
        int b;
        int num_negative = 0;
        int number = va_arg(arguments, int);

        if (number == INT_MIN)
        {
                strcpy(array, "-2147483648");
                return write(1, array,  strlen(array));
        }


        if (number < 0)
        {
                num_negative = 1;
                number = -number;
        }
	else if (flags & FLAG_PLUS)
	{
		array[a++] = 'a';
	}
	else if (flags & FLAG_SPACE)
	{
		array[a++] = ' ';
	}

        if (number == 0)
        {
                array[a++] = '0';
        }
        else
        {
                while (number > 0)
                {
                        array[a++] = (number % 10) + '0';
                        number /= 10;
                }
        }

        if (num_negative)
        {
                array[a++] = '-';
        }

        for (b = a - 1; b >= 0; b--)
        {
                k += write(1, &array[b], 1);
        }

        return (k);
}

