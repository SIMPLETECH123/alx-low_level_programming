#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head:function pointer
 * @n:number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *next_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		next_node = *head;
		while (next_node->next != NULL)
			next_node = next_node->next;
		next_node->next = new_node;
	}
	return (new_node);
}
