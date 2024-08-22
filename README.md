_printf function

project overview
 This is a custom implementation of the standard printf function in c. It formats and print data to stdout
 by identifying the correct format specifiier and implementing the directives.


Features
 it supports a variety of format specifiers
 - %c: prints a single character
 - %s: prints a string
 - %%: prints a percentile

Shortcomings:
it does not support flag characters, field width precision or length modifiers




Usage:
The _printf function takes a format staring and avariable number of arguments.
It returns the number of characters printed excluding the null byte.

	Example
int main(void)
{
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percent: %%\n");
    return 0;
}
	output

Character: H
String: Hello, World!
Percent: %


Requiremnets:
 a c compiler e.g gcc

Installation:
step 1: clone the repository
git clone https://github.com/james14153/printf.git

step 2: compile the _printf  function
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf


Files:
main.h: Header file containing function prototypes and necessary includes.
my_printf.c: Contains  the _printf function.
get_ops.c: Contains helper functions used by _printf for processing format specifiers





