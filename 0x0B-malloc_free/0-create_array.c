#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - writes the character c to stdout
 * @size: The character to print
 * @c: jajska
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	else
	{
	p = (char *)malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
	p[i] = c;
	}
return (p);
}
}
