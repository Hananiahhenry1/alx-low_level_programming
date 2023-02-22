#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int i, n = 50;
	int t1 = 1, t2 = 2;
	int nextTerm = t1 + t2;

	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
