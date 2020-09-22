#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{	
	int a;
	int b;
	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
		_putchar('\n');

		for (b = '0'; b <= '9'; b++)
		{
		_putchar(b);
		}
	}
}
