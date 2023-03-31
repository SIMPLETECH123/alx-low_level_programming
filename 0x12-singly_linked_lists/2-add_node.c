#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - unction that adds a new node at the beginning of a list_t list.
 * @head:pointer holding another function
 * @str:string
 * Return:address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	unsigned int count = 0, len_str = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[count] != '\0')
	{
		len_str++;
		count++;
	}
	dup = malloc(sizeof(char) * (count));
	count = 0;
	while (str[count])
	{
		dup[count] = str[count];
		count++;
	}
	dup[count] = '\0';
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
		(*head)->str = dup;
		(*head)->len = len_str;
		return (new);
	}
	new->next = *head;
	*head = new;
	new->str = dup;
	new->len = len_str;
	return (new);
}
