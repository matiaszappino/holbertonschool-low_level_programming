#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
return (a);
}
/**
 * string_nconcat - writes the character
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int a, i;
	unsigned int b, k;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	a = _strlen(s1);
	b = _strlen(s2);

	if (n >= b)
	{
		n = b;
	}

	array = (char *)malloc(sizeof(char) * (a + n) + 1);

	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (k = 0; k <= n; k++)
	{
		array[i + k] = s2[k];
	}
return (array);
}
