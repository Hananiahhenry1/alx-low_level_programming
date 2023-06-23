#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - functions to print strings
 * @separator: constant
 * @n: variable
 * Return: success
 */ 
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start (ap,n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s",separator);
	}
	printf("\n");
	va_end(ap);
}
