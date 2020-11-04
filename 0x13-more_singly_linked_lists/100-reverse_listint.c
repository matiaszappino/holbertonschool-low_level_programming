#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - function to print a list
 * @head: head
 * @str: string
 * Return: the number of nodes
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
        	current->next = prev;
        	prev = current;
        	current = next;
	}
*head = prev;
return (prev);
}
