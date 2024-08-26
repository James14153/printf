#include "main.h"
#include <stdio.h>

/*
 * S_print - prints a string based on custom specifier S
 * @arguments: the list of arguments
 * @flags: checks for active flags
 * return number of chracters printed
 *
 */

int S_print(va_list arguments, int flags)
{
	char *string = va_arg(arguments, char *);
	int a;
	int b = 0;
	char hex[3];
	char *not_printable = "\\x";
	char array[1024];
	int j = 0;

	(void)flags;

	if (!string)
		string = "This is a null string";

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] < 32 || string[a] >= 127)
		{
			array[j++] = not_printable[0];
			array[j++] = not_printable[1];
			sprintf(hex, "%02X", (unsigned char)string[a]);
			array[j++] = hex[0];
			array[j++] = hex[1];
			b += 4;
		}
		else
		{
			array[j++] = string[a];
			b++;
		}

		if (j >= 1020)
		{
			write(1, array, j);
			j = 0;
		}
	}


	if (j > 0)
	{
		write(1, array, j);

	}
	return b;
}
