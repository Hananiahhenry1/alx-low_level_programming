#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argv: argument value
 * @argc: argument count
 * Return: success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++);
	printf("%d\n", i - 1);
	return (0);
}
