#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b:size of space
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));
	return (p);
}
