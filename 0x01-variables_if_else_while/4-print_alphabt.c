#include <stdio.h>
/**
 * main - Entry point
 * Description - Print all the letters except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if ((alp != 'q' && alp != 'e') && alp <= 'z')
			putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
