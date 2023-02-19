#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev = 'z';

	while (rev <= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
