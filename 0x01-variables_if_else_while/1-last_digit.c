#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
		printf("%d is greater than 5\n", n);
	else if ((n % 10) == 0)
		printf("%d is 0\n", n);
	else
		printf("%d is less than 6 and 0\n", n);
	return (0);
}
