#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value / arrays
 * Return: on Sucess 0
 */
int main(argc, *argv[])
{
	int i;

	if (argc > 1)
		for (i = 1; i < argc; i++)
			printf("%s", argv[i]);
	return (0);
}
