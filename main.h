#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> 
/* for the variadic arguments */

#include <unistd.h>
/* for the write function used in the custom printf */

#define FLAG_PLUS 1
#define FLAG_SPACE 2
#define FLAG_HASH 4

/*
 * struct format_specifier - struct to link specifiers to their printing functions
 * @format_specifier - the specifier character
 * @printing_function: the function linked to the specifier
 *
 */

typedef struct specifier_function
{
	char format_specifier;
	int (*printing_function)(va_list arguments, int flags);
} specifier_function;

/* functions  used */
int _printf(const char *format, ...); /* custom printf function prototype */
int (*get_ops(char a))(va_list, int);
int char_print(va_list arguments, int flags);
int str_print(va_list arguments, int flags);
int percent_print(va_list arguments, int flags);
int num_print(va_list arguments, int flags);
int bin_print(va_list arguments, int flags);
int octal_print(va_list arguments, int flags);
int hex_lower_print(va_list arguments, int flags);
int hex_upper_print(va_list arguments, int flags);
int unsigned_int_print(va_list arguments, int flags);
int S_print(va_list arguments, int flags);
int p_print(va_list arguments, int flags);
int reverse_print(va_list arguments, int flags);
int rot_print(va_list arguments, int flags);

#endif /* MAIN_H */
