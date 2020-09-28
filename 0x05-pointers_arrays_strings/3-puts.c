#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	int a = 0;
	
	while (*(str + a) != '\0')
	{
	_putchar(*(str + a));
	a++;
	}
_putchar('\n');
}
