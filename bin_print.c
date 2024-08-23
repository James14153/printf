#include "main.h"

/*
 * bin_print - prints an unsigned int in binary
 * @arguments: the list of arguments
 *
 * return 0 if success
 *
 */

int bin_print(va_list arguments)
{
	int a = 0;
	int b;
	int k = 0;
	char array[32];
	unsigned int number = va_arg(arguments, int);

	if (number == 0)
	{
		array[a++] = '0';
	}
	else
	{
		while (number > 0)
		{
			array[a++] = (number % 2) + '0';
			number /= 2;
		}
	}

	for (b = a -1; b >= 0; b--)
	{
		write(1, &array[b], 1);
		k++;
	}
	return k;
}

