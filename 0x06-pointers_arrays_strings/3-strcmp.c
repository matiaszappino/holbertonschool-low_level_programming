#include "holberton.h"

/**
 * _strcmp - writes the character c to stdout
 * @s1: The character to print
 * @s2: jhskajs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0')
	{
		if (s1[x] < s2[x])
		{
			return (s1[x] - s2[x]);
		}
		if (s1[x] > s2[x])
		{
			return (s1[x] - s2[x]);
		}
	x++;
	}
return (0);
}
