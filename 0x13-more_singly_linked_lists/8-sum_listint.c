#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of the nodes
 * @head: pointer to list
 * Return: the sum
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
