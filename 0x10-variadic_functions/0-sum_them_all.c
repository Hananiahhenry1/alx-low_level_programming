#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: total number to add as argument
 * Return: on success; Sum of all value passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);

	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
