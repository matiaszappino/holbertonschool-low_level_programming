#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function to return de number of nodes
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
return (i);
}
