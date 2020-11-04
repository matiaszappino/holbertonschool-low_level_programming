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
	listint_t *aux;
	listint_t *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	new->n = n;
	aux = *head;
	while (i < (idx - 1) && aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	if (aux == NULL)
		return (NULL);
new->next = aux->next;
aux->next = new;
return (new);
}
