#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head
 * @index: index
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *aux_two = NULL;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index >= dlistint_counter(*head))
		return (-1);
	aux = *head;
	if (index == 0)
	{
		aux_two = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux_two);
		return (1);
	}
	if (index == dlistint_counter(*head) - 1)
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
 * dlistint_counter - counter of nodes
 * @head: head
 * Return: quantity of nodes
 */
size_t dlistint_counter(const dlistint_t *head)
{
	size_t counter;

	for (counter = 0; head; counter++)
	{
		head = head->next;
	}
	return (counter);
}
