#include <stdio.h>
/**
 * main - Entry
 * Description - program that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp  = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
