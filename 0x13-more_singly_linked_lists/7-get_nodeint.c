#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head:head
 * @index:nth
 * Return:nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
