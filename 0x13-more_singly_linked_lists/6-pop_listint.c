#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function to print a list
 * @head: pointer to list
 * Return: the number of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (head == NULL)
		return (0);

	aux = *head;

	n = aux->n;

	*head = (*head)->next;

	free(aux);

	return (n);
}
