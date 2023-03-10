#include "main.h"
/**
 * _memset - entry point
 * @s: pointer of memory area
 * @b: constant byte
 * @n: bytes of memory to be pointed by s
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
