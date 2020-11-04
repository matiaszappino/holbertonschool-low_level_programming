#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: pointer to the list
 * @idx: index
 * @n: data
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *auxfor;
	listint_t *auxback;
	listint_t *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	auxfor = *head;
	auxback = *head;
	auxfor = auxfor->next;
	if (head != NULL && idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1)
	{
		if (auxfor->next)
			auxfor = auxfor->next;
		if (auxback->next)
			auxback = auxback->next;
		else
			return (0);
		i++;
	}
	auxback->next = new;
	new->next = auxfor;
	return (new);
}
