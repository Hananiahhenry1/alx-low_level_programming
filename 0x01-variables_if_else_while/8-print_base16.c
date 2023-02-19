#include <stdio.h>
/**
 * main - Entry point
 * Description - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int dec;
	char hex = 'a';

	while (dec < 10)
	{
		putchar(dec + '0');
		dec++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
