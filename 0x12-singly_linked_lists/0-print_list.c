#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - function to print a list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
	i++;
	h = h->next;
	}
return (i);
}
