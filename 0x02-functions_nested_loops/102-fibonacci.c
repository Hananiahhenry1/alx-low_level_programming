#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */
int main(void)
{
	int i, n = 50;
	int t1 = 1, t2 = 2;
	long nextTerm = t1 + t2;

	print("%d , %d,", t1, t2);
	for (i = 3; i <= n; ++i)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
