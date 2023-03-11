#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - the result of multiplication
 * @argc: number of arguement
 * @argv: array of arguement
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
