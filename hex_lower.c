#include "main.h"

/*
 * hex_lower_print - converts a digit to hexadecimal form
 * in lowercase
 * @arguments: takes a list of arguments
 * @flags: indicates which flags are active
 * return the number of printed characters
 *
 */

int hex_lower_print(va_list arguments, int flags)
{
	int a = 0;
	int b;
	int k = 0;
	char array[50];
	char *str = "0123456789abcdef";
	unsigned int number = va_arg(arguments, unsigned int);

	if (number == 0)
	{
		array[a++] = '0';
	}
	else
	{
		if (flags & FLAG_HASH)
		{
			array[a++] = '0';
		}

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

		

