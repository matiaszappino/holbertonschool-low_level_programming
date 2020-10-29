#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - function to print a list
 * @head: head
 * @str: string
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	int i;

	if (!str || !head)
		return (NULL);
	aux = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
		aux = aux->next;

	aux->next = new;
	return (new);
}
