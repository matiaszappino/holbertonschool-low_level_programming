#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - print all the elements in the list.
 * @head: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *slow_p = head;
	const listint_t *fast_p = head;

	if (!head)
		return (98);
	while (fast_p)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		slow_p = slow_p->next; 
		fast_p = fast_p->next->next; 
		counter++;
		if (slow_p == fast_p)
			break;
	}
	return (counter);
}
