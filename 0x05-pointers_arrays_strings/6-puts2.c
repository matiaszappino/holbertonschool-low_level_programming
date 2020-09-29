#include "holberton.h"
/**
 * puts2 - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		if (*(str + a) % 2 == 0)
		{
		_putchar(*(str + a));
		}
	}
_putchar('\n');
}
