#include <stdio.h>
/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 (Always 0)
 */
int main(void)
{
	char alp = 'a';
	char alph = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
