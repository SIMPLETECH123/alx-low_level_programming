#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr:pointer
 * @old_size: old size of pointer
 * @new_size:new size of pointer
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	int dif1;
	unsigned int i;

	dif1 = new_size - old_size;

	if (new_size > old_size)
		p = malloc(old_size + dif1);

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		p = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
	{
		p = ptr;
	}

	return (p);
}
