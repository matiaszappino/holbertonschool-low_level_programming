#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * _strlen - Entry point
 * @s: d
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int length;
	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * strtow - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char **strtow(char *str)
{
        int i, k, palabra, j, m;
        char *aux1;
	char **aux2;
	int original = _strlen(str);
	int espacios = 0;

	aux1 = (char *)malloc(original * sizeof(char) + 1);

	if (aux1 == NULL)
	{
	return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
		{
		espacios++;
		}
	}
	palabra = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
		while (str[i] != ' ')
		{
			aux1[k] = str[i];
			k++;
			i++;
		}
		aux1[k++] = '\n';
		palabra++;
		}
	}
	printf("%s\n", aux1);
	printf("%d\n%d\n", original, espacios);
	aux2 = (char **) malloc(500);

	if (aux2 == NULL)
		return (NULL);
	for (m = 0; m <= (original - espacios + palabra); m++)
	{
for (n = 0; 
	{
		*aux2 = aux1;
	}
	return (aux2);
}
