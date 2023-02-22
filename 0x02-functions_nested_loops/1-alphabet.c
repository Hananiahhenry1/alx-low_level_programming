#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char alp = 'a';

	for (alp = 'a'; 'a' <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
