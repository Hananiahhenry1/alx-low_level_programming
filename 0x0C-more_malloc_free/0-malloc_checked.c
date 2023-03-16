#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: value
 * Return: FAILED 98
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		return (98);
	return (arr);
}

