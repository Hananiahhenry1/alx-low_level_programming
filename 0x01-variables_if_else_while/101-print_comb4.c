#include<stdio.h>
/**
* main - Entry point
* Decription - prints all possible different combinations of three digits.
* Return: Always 0 (success)
*/
int main(void)
{
	int huns, tens, ones;

	for (huns = 0; huns < 10; huns++)
	{
		for (tens = 0; tens < 10; tens++)
		{
			for (ones = 0; ones < 10; ones++)
			{
				if (!((ones == tens) || (tens == huns) || (tens > ones) || (huns > tens)))
				{
					putchar(huns + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					if (!(ones == 9 && huns == 7 && tens == 8))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(' ');
	return (0);
}
