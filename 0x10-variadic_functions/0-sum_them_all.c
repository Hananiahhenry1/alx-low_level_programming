#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum all
 * @n: numbers to sum
 * Return: 0 always
*/
int sum_them_all(const unsigned int n, ...)
{
    int i;
    int sum = 0;

    va_list(ap);
    va_start(ap, n);
    for(i = 0; i < n; i++)
        sum += va_arg(ap, int);
    va_end(ap);
    return (sum);
}