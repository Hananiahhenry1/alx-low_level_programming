#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: string pointing to 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 0 || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
