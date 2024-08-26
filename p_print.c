#include "main.h"

/*
 * p_print - pprints the address of pointer in hexadecimal
 * @arguments: takes a list of argumentst
 *
 * returns the number of characters printed
 *
 */

int p_print(va_list arguments)
{
	void *ptr = va_arg(arguments, void *);
	char array[50];
	unsigned long number;
	char *hx = "0123456789abcdef";
	int a = 2;
	int b, j, c = 0;

	if (!ptr)
	{
		return (write(1, "null", 6));
	}

	number = (unsigned long)ptr;
	array[0] = '0';
	array[1] = 'x';

	if (number == '0')
	{
		array[a++] = '0';
	}
	else
	{
		while (number > 0)
		{
			array[a++] = hx[number % 16];
			number /= 16;
		}

		for (b = 2, j = b - 1; b < j; b++, j--)
		{
			char y = array[b];
			array[b] = array[j];
			array[j] = y;
		}
	}

	c = write(1, array, a);
	return c;
}

