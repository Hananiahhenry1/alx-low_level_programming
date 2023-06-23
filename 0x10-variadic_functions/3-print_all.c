#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - functon that prints anything
 * @format: lists of argument passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *str, *sep = "";

	va_start(ap, format);
	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
