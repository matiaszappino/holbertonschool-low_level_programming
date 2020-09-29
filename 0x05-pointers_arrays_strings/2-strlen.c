#include "holberton.h"
/**
 * _strlen - writes the character
 * @s: The pointer
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
