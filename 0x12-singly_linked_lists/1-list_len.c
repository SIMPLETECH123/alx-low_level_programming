#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h:defined struct
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
