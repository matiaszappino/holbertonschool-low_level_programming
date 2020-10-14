#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - writes the character c to stdout
 * @s1: The character to print
 * @s2: asda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
	int i, b, c, d, j;

	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	c = i + b;

	p = (char *) malloc(c * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (d = 0; d < i; d++)
	{
		p[d] = s1[d];
	}
	for (j = 0; j < b; j++)
	{
		p[d + j] = s2[j];
	}
return (p);
}
