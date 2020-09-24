#include <unistd.h>
#include "holberton.h"

/**
 * print_numbers - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
	int a;
	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
}
