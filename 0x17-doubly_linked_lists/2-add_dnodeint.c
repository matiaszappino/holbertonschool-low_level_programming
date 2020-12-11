#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (0);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return(new);
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
return (new);
}
