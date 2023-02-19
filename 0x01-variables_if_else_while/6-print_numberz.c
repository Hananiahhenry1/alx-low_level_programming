#include <stdio.h>
/**
 * main - Entry point
 *
 * Description -  prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
