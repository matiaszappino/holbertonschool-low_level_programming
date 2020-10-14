#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - writes the character c to stdout
 * @ac: The character to print
 * @av: asda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *argstostr(int ac, char **av)
{
	int i, j, l, cont;
	char *array;

	if (ac == 1 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cont++;
		}
	}
	cont = cont + ac;

	array = (char *) malloc(cont * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	l = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++, l++)
		{
			array[l] = av[i][j];
		}
		array[l++] = '\n';

	}
return (array);
}
