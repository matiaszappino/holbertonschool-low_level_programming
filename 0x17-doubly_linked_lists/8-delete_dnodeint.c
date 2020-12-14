#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head
 * @index: index
 * Return: Returns 1 if it succeeded, -1 if it failed
 */

	if (!head)
		return (-1);
	if (index >= dlistint_len(*head))
	if (index >= dlistint_counter(*head))
		return (-1);
	aux = *head;
	if (index == 0)
		free(aux_two);
		return (1);
	}
	if (index == dlistint_len(*head) - 1)
	if (index == dlistint_counter(*head) - 1)
	{
		while (i++ < index - 1)
			aux = aux->next;
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
