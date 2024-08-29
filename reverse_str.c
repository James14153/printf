#include "main.h"

/*
 * reverse_print - prints  a string in reverse
 * @arguments: takes a list of aarguments
 * @flags: checks for active flags
 *
 * return the number of characters printed
 *
 */

int reverse_print(va_list arguments, int flags)
{
	char *str = va_arg(arguments, char *);
	int n = 0, i;

	(void)flags;

	if (str == NULL)
		str = "(null";

	while (str[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		write(1, &str[i], 1);
	}

	return n;
}
