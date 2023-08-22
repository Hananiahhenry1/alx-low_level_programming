#include "main.h"
/**
 * _islower - Entry point
 * @c: function that checks for lowercase character
 * Return: success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
