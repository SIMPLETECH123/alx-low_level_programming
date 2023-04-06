#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head:double pointer
 * @index:index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_node;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}
		next_node = temp->next;
		temp->next = next_node->next;
		free(next_node);
	}
	return (1);
}
