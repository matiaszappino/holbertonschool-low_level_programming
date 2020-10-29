#include "lists.h"
#include <stdio.h>
/**
 * add_node - function to print a list
 * @head: pointer to list
 * @str: string
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str || !head)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}
