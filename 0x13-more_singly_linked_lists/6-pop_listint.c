#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function to print a list
 * @head: pointer to list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (head == NULL)
		return (0);

	if (!(*head))
		return (0);

	aux = *head;

	n = aux->n;

	*head = (*head)->next;

	free(aux);

	return (n);
}
