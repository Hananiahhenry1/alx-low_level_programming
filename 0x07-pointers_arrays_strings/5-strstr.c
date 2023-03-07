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
		while (*haystick == *needle && needle != '\0')
		{
			haystick++;
			needle++;
		}
		if (*haystick == '\0')
			return (haystick);
	}
	return ('\0');
}
