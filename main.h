#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> 
/* for the variadic arguments */

#include <unistd.h>
/* for the write function used in the custom printf */

/*
 * struct format_specifier - struct to link specifiers to their printing functions
 * @format_specifier - the specifier character
 * @printing_function: the function linked to the specifier
 *
 */

typedef struct specifier_function
{
	char format_specifier;
	int (*printing_function)(va_list arguments);
} specifier_function;

/* functions  used */
int _printf(const char *format, ...); /* custom printf function prototype */
int (*get_ops(char a))(va_list);
int char_print(va_list arguments);
int str_print(va_list arguments);
int percent_print(va_list arguments);
int num_print(va_list arguments);

#endif /* MAIN_H */
