#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: head
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int number = 0;

	aux = head;

	while (aux)
	{
		number = number + aux->n;
		aux = aux->next;
	}
return (number);
}
