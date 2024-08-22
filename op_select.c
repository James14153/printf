#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/*
 * char_print - prints the character
 * @arguments: the list of arguments
 *
 * return: the number of characters printed
 *
 */

int char_print(va_list arguments)
{
	char c = va_arg(arguments, int);
	return (write(1, &c, 1));
}

/*
 * str_print - prints a string
 * @arguments: the list of arguments to be passed
 *
 * return: the number of chracters printed
 *
 */

int str_print(va_list arguments)
{
	char *str = va_arg(arguments, char *);
	int j = 0;

	if (str == NULL)
		str = "(This is a null string)";
	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
	return j;
}


/*
 * percent_print - prints a percentage sign
 * @arguments: does not use arguments
 *
 * return the number of characters printed
 *
 */

int percent_print(va_list arguments)
{
	(void)arguments;
	return (write(1, "%", 1));
}

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
		{'c', char_print},
		{'s', str_print},
		{'%', percent_print},
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

