#include "function_pointers.h"
/**
 * int_index - checks an array
 * @array: arrays
 * @size: size of array
 * @cmp: function pointer
 * Return: On success -1 or No of int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if(cmp(array[i]))
		i++;
		return (i);
	}
	return (-1);
}
