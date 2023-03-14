#include "main.h"
/**
 * _sqrt_recursion - square of a number
 * @n: value
 * @i: test for hypothesis
 * Return: -1 or value
 */
int is_sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 1));
}
/**
 * is_sqrt - for the recursion
 * @i: test for the hypthothesis
 * @n: value
 * Return: value to the _sqrt_recursion
 */
int is_sqrt(int n, int i)
{
	int test;

	test = i * i;
	if (test > n)
		return (-1);
	else if (test == n)
		return (i);
	else
		{
			++i;
			return (is_sqrt(n, i));
		}
}
