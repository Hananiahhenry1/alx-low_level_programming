#include "main.h"
/**
 * _pow_recursion - entry
 * @x: number
 * @y: raise to its power
 * Return: -1 or result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
