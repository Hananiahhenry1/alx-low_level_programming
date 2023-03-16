#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strdup - pointer to a newly allocated space
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		arr[r] = str[r];
	return (arr);
}
