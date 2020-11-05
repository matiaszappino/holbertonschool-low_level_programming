#include "lists.h"
/**
 * free_listint_safe - free the list and set head to NULL
 * @h: the inital pointer to the linked list
 * Return: void return
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux;
	size_t i = 0;

	if (!h)
		return (0);
	while (*h)
		aux = *h, *h = (*h)->next, free(aux), i++;
	return (i);
}
