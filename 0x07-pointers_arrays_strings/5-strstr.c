#include "main.h"
/**
 * _strstr - entry point
 * @haystick: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*haystack == '\0')
			return (haystack);
	}
	return ('\0');
}
