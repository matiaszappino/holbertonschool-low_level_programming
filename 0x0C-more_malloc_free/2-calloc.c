#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - writes the character c to stdout
 * @nmemb: The character to print
 * @size: asda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	array = (char *)malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}
return (array);
}
