#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t list.
 * @head: head
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *aux = NULL;

	if (!head)
		return (0);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;
	new->next = NULL;
	aux = *head;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return(new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	new->prev = aux;
	aux->next = new;
	return (new);
}
