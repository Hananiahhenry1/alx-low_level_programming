#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: print_alphabet_x10
 */
void print_alphabet_x10(void)
{
	int x10;
	char alp = 'a';

	for (x10 = 0; x10 < 10; x10++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
