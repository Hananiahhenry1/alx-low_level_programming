#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	long i, n = 50;
	long t1 = 1, t2 = 2;
	long nextTerm = t1 + t2;

	for (i = 3; i <= n; ++i)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
