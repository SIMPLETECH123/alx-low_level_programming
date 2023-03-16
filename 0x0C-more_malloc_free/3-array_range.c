#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum int in the array
 * @max: maximum integer in the array
 * Return: pointer to array or null
 */
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size && max >= min; i++, min++)
		*(p + i) = min;
	return (p);
}
