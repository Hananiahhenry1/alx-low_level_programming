#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointers to string 0 and 1
 * Return: converted nummber, 0 , 1 , null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return (result);
}
