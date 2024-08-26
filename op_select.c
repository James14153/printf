#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>


/*
 * get_ops - selects the correct function to perfom
 * based on the format specifier
 * @c: the format specifier
 *
 * Return: pointer to the corresponding function
 *
 */


int (*get_ops(char a))(va_list)
{
	specifier_function format_specifiers[] = {
		{'c', (int (*)(va_list, int))char_print},
		{'s', (int (*)(va_list, int))str_print},
		{'%', (int (*)(va_list, int))percent_print},
		{'d', num_print},
		{'i', num_print},
		{'b', (int (*)(va_list, int))bin_print},
		{'u', (int (*)(va_list, int))unsigned_int_print},
		{'o', octal_print},
		{'x', hex_lower_print},
		{'X', hex_upper_print},
		{'S', S_print},
		{'p', p_print},
		{0, NULL}
	};

	int j = 0;

	while (format_specifiers[j].format_specifier)
	{
		if (format_specifiers[j].format_specifier == a)
			return (format_specifiers[j].printing_function);
		j++;
	}
	return NULL;
}

