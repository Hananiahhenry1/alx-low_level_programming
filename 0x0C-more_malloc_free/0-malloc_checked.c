#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: value
 * Return: FAILED 98
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}

