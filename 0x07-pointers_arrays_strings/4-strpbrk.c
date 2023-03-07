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
	while (s[i] != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if ((s + i) == (accept + i))
				return (s + i);
			accept[i]++;
		}
		s[i]++;
	}
	return ('\0');
}
