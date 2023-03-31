#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:pointer functioin
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dup;
	int count = 0, i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	dup = malloc(sizeof(char) * count);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	while (i < count)
	{
		dup[i] = str[i];
		i++;
	}
	new->str = dup;
	new->len = count;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
