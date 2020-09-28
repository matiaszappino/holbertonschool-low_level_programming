#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int a = 0;
	
	while (*(s + a) != '\0')
	{
	a++;
	}
	for (a = a - 1; a >= 0; a--)
	{
	_putchar(*(s + a));
	}
_putchar('\n');
} 
