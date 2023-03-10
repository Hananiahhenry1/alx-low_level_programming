#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * @s: string literal
 * @accept: number of bytes
 * Return: initial segmet of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r = 0;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
