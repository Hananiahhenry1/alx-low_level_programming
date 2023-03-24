#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - prints string literals
 * @separator: arguments passed to the function
 * @n: value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *str1;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str1 = va_arg(str, char *);
		if (str1 == NULL)
			printf("(nil)");
		else
			printf("%s", str1);
		if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
