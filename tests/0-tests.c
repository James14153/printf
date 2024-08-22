#include "main.h"
#include <stdio.h>  

/*
 * main - entry point
 *
 * return 0 if success -1 if error
 *
 */
int main(void)
{
    int num1, num2;/* variables to hold the lengths returned by the function */
 
    /* Test case 1: Printing a character and comparing return lengths */
    num1 = _printf("Character:[%c]\n", 'H');
    num2 = printf("Character:[%c]\n", 'H');
    printf("standard printf length is: %d, custom printf length: is: %d\n", num2, num1);

    /* Test case 2: Printing a string and comparing return lengths */
    num1 = _printf("String:[%s]\n", "Hello, World!");
    num2 = printf("String:[%s]\n", "Hello, World!");
    printf("standard printf length: %d, cudtom printf length: %d\n", num2, num1);

    /* Test case 3: Printing a percent sign and comparing lengths */
    num1 = _printf("Percent:[%%]\n");
    num2 = printf("Percent:[%%]\n");
    printf("standard printf length is: %d, custom printf length: %d\n", num2, num1);

    /* Test case 4: Handling NULL string and comparing lengths */
    num1 = _printf("NULL string:[%s]\n", NULL);
    num2 = printf("NULL string:[%s]\n", NULL);
    printf("standard printf length is: %d, custom printf length is: %d\n", num2, num1);

    /* Test case 5: Printing plain text without format specifiers */
    num1 = _printf("Plain text without specifiers.\n");
    num2 = printf("Plain text without specifiers.\n");
    printf("standard printf length is: %d, custom printf length is: %d\n", num2, num1);

    return 0;
