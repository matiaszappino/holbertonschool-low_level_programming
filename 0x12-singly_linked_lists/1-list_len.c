#include "lists.h"
#include <stdio.h>
/**
 * list_len - function to print a list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
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
