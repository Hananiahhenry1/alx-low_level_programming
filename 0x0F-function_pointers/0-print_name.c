#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - functions pointer to print name
 * @name: argument
 * @f: funtion pounter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f ==  NULL)
		return;
	f(name);
}
