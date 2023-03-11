#include <stdio.h>
#include "main.h"

/**
 * main - prints all argument
 * @argc: number of arguement
 * @argv: array of aruement
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
