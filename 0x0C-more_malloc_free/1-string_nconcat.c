#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of byte assigned from s1 to s2
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, sum1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1)
		i++;
	while (*s2)
		j++;
	if (n >= j)
		sum = i + j;
	else
		sum = i + n;
	arr = malloc(sizeof(char) * sum1 + 1);
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (j < sum)
	{
		arr[j] = s2[j];
		j++;
	}
	return (arr);
}
