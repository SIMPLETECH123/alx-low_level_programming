#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the array
 * @c: character to initialise to
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
