#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
	{
	return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
		}

		p = (char *) malloc(i + 1);

		if (p == NULL)
		{
		return (NULL);
		}

		for (i = 0; str[i] != '\0'; i++)
		{
		p[i] = str[i];
		}
	return (p);
	}
return (NULL);
}
