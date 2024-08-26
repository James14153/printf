#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - custom printf that produces output according to format
 * @format: the specifier of the output being printed
 *
 * Return 0 if success or any other error code if fail
 *
 */

int _printf(const char *format, ...)
{
	int j = 0;
	int flags = 0;

	va_list arguments;
	int (*function)(va_list);
	
	if (format == NULL)
		return (-1);

	va_start(arguments, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			function = get_ops(*format);
			if (function)
				j += function(arguments, flags);
			else
			{
				j += write(1, "%", 1);
				j += write(1, format, 1);
			}
		}
		else
		{
			write(1, format, 1);
			j++;
		}
		format++;
	}
	va_end(arguments);
	return j;
}


