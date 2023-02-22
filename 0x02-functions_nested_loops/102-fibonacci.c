#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int i, n = 50;
	int t1 = 1, t2 = 2;
	long long nextTerm = t1 + t2;

	for (i = 3; i <= n; ++i)
	{
		printf("%lld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
