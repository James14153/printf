#include "main.h"

/*
 * p_print - prints a pointer memory address in hexadecimal form
 * @arguments: list of arguments
 *
 * return the number of caharcters printed
 *
 */

int p_print(va_list arguments)
{
	void *ptr = va_arg(arguments, void *);
	char array[50];
	unsigned long number;
	char *hx = "0123456789abcdef";
	int a = 0; 
	int b, c = 0;

	if (!ptr)
	{
		return (write(1, "(Null)", 5));
	}

	number = (unsigned long)ptr;
	array[a++] = 'x';
	array[a++] = '0';

	while (number > 0)
	{
		array[a++] = hx[number % 16];
		number /= 16;
	}

	for (b = a -1; b >= 0; b--)
	{
		write(1, &array[b], 1);
		c++;
	}

	return c;
}


