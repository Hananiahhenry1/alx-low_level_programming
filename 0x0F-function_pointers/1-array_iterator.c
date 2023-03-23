#include "functions_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: list
 * @size: size of the array
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
