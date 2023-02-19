#include <stdio.h>
/**
* main - Entry point
* Description - prints all possible different combinations of two digits.
* Return: Always 0(success)
*/
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			if (!((tens == ones) || (tens > ones)))
			{
				putchar(tens + '0');
				putchar(ones + '0');
				if (!(ones == 9 && tens == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
