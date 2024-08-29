#include "main.h"

/*
 * rot_print - converts a string to rot 13 format
 * @arguments: takes a list of arguments
 * @flags: checks for active flags
 *
 * returns the number of characters printed
 *
 */

int rot_print(va_list arguments, int flags)
{
	char *str = va_arg(arguments, char *);
	int i, j = 0;
	char c, b;

	(void)flags;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];

		if (c >= 'a' && c <= 'z')
		{
			b = ((c - 'a' + 13) % 26) + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			b = ((c - 'A' + 13) % 26) + 'A';
		}

		write(1, &b, 1);
		j++;
	}

	return j;
}
