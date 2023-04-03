#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h:struct
 * Return:number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
