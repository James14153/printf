#include "main.h"

/*
 * octal_print - print numbers in octal form
 * @arguments: the list of arguments tranversed
 *
 * return the number of characters printed
 */

int octal_print(va_list arguments, int flags)
{
	int a = 0;
	int b;
	int k = 0;
	unsigned int number = va_arg(arguments, unsigned int);
	char array[50];

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
			array[a++] = (number % 8) + '0';
			number /= 8;
		}
	}

	for (b = a - 1; b >= 0; b--)
	{
		write(1, &array[b], 1);
		k++;
	}
	return k;
}
