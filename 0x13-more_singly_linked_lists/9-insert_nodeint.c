#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -function inserts a new node at a given position.
 * @head:double struct pointer
 * @idx:index of the list where the node will be inserted
 * @n:input
 * Return:pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cont_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	cont_node = *head;
	for (i = 0; cont_node != NULL && i < idx - 1; i++)
	{
		cont_node = cont_node->next;
	}
	if (i != idx - 1 || cont_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	new_node->next = cont_node->next;
	cont_node->next = new_node;
	return (new_node);
}
