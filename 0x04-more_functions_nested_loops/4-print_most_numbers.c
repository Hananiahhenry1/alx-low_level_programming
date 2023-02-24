#include "main.h"
/**
 * print_most_numbers - Entry point
 * Return: success
 */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a < 57; a++)
	{
		if (!(a == 50 || a == 52))
			_putchar(a);
	}
	_putchar('\n');
}
