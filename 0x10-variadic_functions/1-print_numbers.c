#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers, followed by a new line
 * @separator: string printed between numbers
 * @n: total number of argument passed
 * @...: total number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
