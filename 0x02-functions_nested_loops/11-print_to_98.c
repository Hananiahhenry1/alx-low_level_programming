#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: prints all natural numbers from n to 98
 * Return: success
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			printf("%d", 98);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			printf("%d", 98);
		}
	}
	printf("\n");
}
