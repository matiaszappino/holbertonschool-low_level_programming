#include "lists.h"
#include <stdio.h>
/**
 * free_list - function to print a list
 * @head: pointer to list
 * Return: the number of nodes
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
