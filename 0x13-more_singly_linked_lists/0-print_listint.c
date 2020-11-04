#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function to print a list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
return (i);
}
