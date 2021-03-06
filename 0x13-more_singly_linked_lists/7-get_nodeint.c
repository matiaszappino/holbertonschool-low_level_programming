#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function to get a node at index
 * @head: pointer to list
 * @index: index
 * Return: the number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux;

	if (!head)
		return (NULL);


	aux = head;

	while (aux != NULL)
	{
		if (i == index)
		{
			return (aux);
		}
		aux = aux->next;
		i++;
	}
return (NULL);
}
