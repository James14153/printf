#include "main.h"
#include <stdio.h>

/*
 * S_print - prints a string based on custom specifier S
 * @arguments: the list of arguments
 *
 * return number of chracters printed
 *
 */

int S_print(va_list arguments)
{
	char *string = va_arg(arguments, char *);
	int a;
	int b = 0;
	char hex[3];
	char *not_printable = "\\x";

	if (!string)
		string = "This is a null string";

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] < 32 || string[a] >= 127)
		{
			write(1, not_printable, 2);
			b++;
			sprintf(hex, "%02X", (unsigned char)string[a]);
			write(1, hex, 2);
			b++;
		}
		else
		{
		write(1, &string[a], 1);
		}
	}
	return b++;
}
