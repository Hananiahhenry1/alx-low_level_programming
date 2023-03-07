#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * @s: string literal
 * @accept: number of bytes
 * Return: initial segmet of s
 */
unsigned int _strspn(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
				return (*s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
