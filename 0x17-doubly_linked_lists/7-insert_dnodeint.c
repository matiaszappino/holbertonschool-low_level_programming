#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: h
 * @idx: index
 * @n: n
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux;
	dlistint_t *new;

	unsigned int contador = 0;

	if (!h)
		return (0);

	aux = *h;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;

	while(aux->next && contador != idx)
	{
		contador++;
		aux = aux->next;
	}

	if (contador < idx)
		return (NULL);

	else
	{
		if (*h == NULL)
		{
			*h = new;
			new->next = NULL;
			new->prev = NULL;
		}
		new->next = aux;
		aux = aux->prev;
		new->prev = aux;
		aux->next = new;
		aux = aux->next->next;
		aux->prev = new;
	}
return (new);
}
		
		
