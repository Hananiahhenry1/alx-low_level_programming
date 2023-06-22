#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - varadic to print numbers
 * @seperator: word seperator
 * @n: numbers to print
 * Return: numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned i;

    va_start(ap, n);
    for (i = 0; i < n; i++)
        printf("%d\n", va_arg(ap, int));
    if (i != (n - 1) && separator != NULL)
        printf("%s", separator);
    printf("/n");
    va_end(ap);
}