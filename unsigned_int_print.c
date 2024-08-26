#include "main.h"

/*
 * unsigned_int_print - prints an unsigned int in decimal
 * @arguments: the list of arguments
 * @flags: checks for active flags 
 * return 0 if success
 *
 */

int unsigned_int_print(va_list arguments, int flags)
{
	int a = 0;
	int b;
	int k = 0;
	unsigned number = va_arg(arguments, unsigned int);
	char array[50];

	(void)flags;

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

	for (b = a - 1; b >= 0; b--)
	{
		write(1, &array[b], 1);
		k++;
	}

	return k;
}


