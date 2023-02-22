#include "main.h"
/**
 * main - Entry point
 * Return: 0 always
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;
	return sum;
}
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
