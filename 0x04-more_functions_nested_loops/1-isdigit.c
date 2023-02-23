#include "main.h"
/**
 * _isdigit - Entry point
 * @c: value to be compared
 * Return: success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
