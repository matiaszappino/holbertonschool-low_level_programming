#include "lists.h"
/**
 *dlistint_len - counter of nodes
 *@h: h
 *Return: quantity of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *aux;

	if (h == NULL)
	{
		return (0);
	}
	aux = h;

	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: h
 *@idx: index of new node
 *@n: node int
 *Return: Returns a new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	aux = *h;
	while (i++ < idx - 1)
		aux = aux->next;

	aux->next->prev = new;
	new->next = aux->next;
	aux->next = new;
	new->n = n;
	new->prev = aux;
	return (new);
	}
