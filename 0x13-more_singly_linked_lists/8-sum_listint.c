#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function to print a list
 * @head: pointer to list
 * Return: the number of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;

	if (!head)
		return (0);

	aux = head;

	while (aux != NULL)
	{
		sum = sum + aux->n;
		aux = aux->next;
	}
return (sum);
}
