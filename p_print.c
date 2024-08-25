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
	int a = 2; 
	int c = 0;

	if (!ptr)
	{
		return (write(1, "(null)", 6));
	}

	number = (unsigned long)ptr;
	array[0] = '0';
	array[1] = 'x';
	
	if (number == 0)
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

	for (int b = 2; end = a - 1; b++; end--)
	{
		char temp = array[b];
		array[b] = array[end];
		array[end] = temp;
	}
	c = write(1, array, a);

	return c;
}


