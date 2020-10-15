#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - writes the character c to stdout
 * @ptr: original pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, j, k;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = (char *)malloc(new_size);
		if (p == NULL)
			return (NULL);
	return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		p = (char *) malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			p[i] = ((char *)ptr)[i];
		free(ptr);
		return (p);
	}
	p = (char *)malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (old_size > new_size)
	{
		for (k = 0; k < old_size; k++)
			p[k] = ((char *)ptr)[k];
	}
	for (j = 0; j < old_size; j++)
		p[j] = ((char *)ptr)[j];
free(ptr);
return (p);
}
