#include "main.h"
/**
 * _strpbrk - string in any set of bytes
 * @s: pointer
 * @accept: string
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return ((char *)s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
