#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum all
 * @n: numbers to sum
 * Return: 0 always
*/
int sum_them_all(const unsigned int n, ...)
{
    va_list(ap);
    va_start(ap, n);
    int i = 0;
    int sum = 0;

    sum += va_arg(ap, int);
    va_end(ap);
    return (sum);
    }