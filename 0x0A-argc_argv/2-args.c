#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argv: argument value
 * @argc: argument count
 * Return: success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n",  argv[i]);
		i++;
	}
	return (0);
}
