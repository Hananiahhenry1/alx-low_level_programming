#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: prints the last digit of a number.
 * Return: success
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num = num * -1;
	_putchar(num + '0');
	return (0);
}
