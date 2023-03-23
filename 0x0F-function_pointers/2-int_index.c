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
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
