#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: h
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *aux;

	if (!h)
	return (0);

	aux = h;

	while (aux)
	{
		printf("%i\n", aux->n);
		i++;
		aux = aux->next;
	}
return (i);
}
