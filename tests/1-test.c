#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    /* Test positive numbers */
    len = _printf("Positive number: %d\n", 12345);
    printf("Expected length: %d\n", len);

    /* Test zero */
    len = _printf("Zero: %d\n", 0);
    printf("Expected length: %d\n", len);

    /* Test negative numbers */
    len = _printf("Negative number: %d\n", -67890);
    printf("Expected length: %d\n", len);

    /* Test with multiple numbers */
    len = _printf("Multiple numbers: %d, %d, %d\n", 1, -2, 3);
    printf("Expected length: %d\n", len);

    /* Test with the integer minimum value */
    len = _printf("INT_MIN: %d\n", -2147483648);  /* Typically INT_MIN for a 32-bit integer */
    printf("Expected length: %d\n", len);

    /* Test with the integer maximum value */
    len = _printf("INT_MAX: %d\n", 2147483647);  /* Typically INT_MAX for a 32-bit integer */
    printf("Expected length: %d\n", len);

    return (0);
}
