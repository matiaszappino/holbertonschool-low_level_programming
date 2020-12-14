#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return: the node at index or null if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	if (!head)
		return (0);

	aux = head;

	while (aux != NULL)
	{
		if (i == index)
			return (aux);
		aux = aux->next;
		i++;
	}
return (aux);
}
