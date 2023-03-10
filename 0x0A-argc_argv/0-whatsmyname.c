#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value / arrays
 * Return: on Sucess 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc; i++)
			printf("%s", argv[i]);
	printf("\n");
	return (0);
}
