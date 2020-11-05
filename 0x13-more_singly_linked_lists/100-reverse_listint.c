#include "lists.h"
/**
 * reverse_listint -  function that reverses a linked list
 * @head: the inital pointer
 * Return:   pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev;

	if (!(*head))
		return (0);

	current = NULL;
	prev = NULL;


	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
