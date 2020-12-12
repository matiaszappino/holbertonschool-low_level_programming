#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position.
 * @h: h
 * @idx: index
 * @n: n
 * Return: 1 on succes -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	dlistint_t *aux_fast;
	unsigned int contador = 0;

	if (!head)
		return (-1);

	aux = *head;
	aux_fast = *head;

if (index == 0)
		*head = (*head)->next;

	else
	{
		while(aux_fast->next && contador != index)
		{
			contador++;
			aux_fast = aux_fast->next;
			aux = aux->next;
		}

		aux_fast = aux_fast->next->next;

		if (contador < index)
			return (-1);

		else
		{
			aux->next = aux_fast;
			aux_fast->prev = aux;
		}
	}	
return (1);
}
