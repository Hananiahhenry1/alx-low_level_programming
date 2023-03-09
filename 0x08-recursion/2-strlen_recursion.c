#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s: pointer
 * Return: 0 or strlen
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}
