#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: size allocate
 * @c: character
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == '\0')
		return (NULL);
	for (i = 0; i < size ; i++)
		arr[i] = c;
	return (arr);
}
