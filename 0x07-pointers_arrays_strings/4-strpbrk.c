#include "main.h"
/**
 * _strpbrk - string in any set of bytes
 * @s: pointer
 * @accept: string
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
