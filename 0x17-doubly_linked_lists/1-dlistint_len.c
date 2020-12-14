#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *aux;

	if (!h)
		return (0);
	aux = h;

	while (aux)
	{
		aux = aux->next;
		n++;
	}
return (n);
}
