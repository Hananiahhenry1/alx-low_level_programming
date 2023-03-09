#include "main.h"
/**
 * _sqrt_recursion - square of a number
 * @n: value
 * Return: -1 or value
 * is_sqrt - for the recursion
 * @i: test the hyphothesis
 */
int is_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 1));
}
/**
 * is_sqrt - for the recursion
 * @i: test for the hypthothesis
 */
int is_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i < n)
		{
			++i;
			return (is_sqrt(n, i));
		}
	else
		return (i);
}
