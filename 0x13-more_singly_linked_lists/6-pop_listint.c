#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node
 * @head:double pointer
 * Return:head of node pointer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	current = (*head)->next;
	i = current->n;
	temp = NULL;
	free(temp);
	return (i);
}
