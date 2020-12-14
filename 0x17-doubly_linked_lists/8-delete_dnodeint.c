#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *aux_two = NULL;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index >= dlistint_len(*head))
		return (-1);
	if (index == 0)
	{
		aux_two = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux_two);
		return (1);
	}
	if (index == counter(*head) - 1)
	{
		while (i++ < index - 1)
			aux = aux->next;
		aux_two = aux->next;
		aux->next = NULL;
		free(aux_two);
		return (1);
	}
	while (i++ < index - 1)
		aux = aux->next;
	aux_two = aux->next;
	aux->next = aux->next->next;
	aux->next->prev = aux;
	free(aux_two);
	return (1);
}
/**
 * dlistint_len - returns quantity of nodes
 * @head: head
 * Return: quantity of nodes
 */
size_t counter(const dlistint_t *head)
{
	size_t counter;

	for (counter = 0; head; counter++)
	{
		head = head->next;
	}
	return (counter);
}
