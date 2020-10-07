#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
        {
                return;
        }
	if (*s != '\0')
        {
                _print_rev_recursion(s + 1);
		_putchar(*s);
        }
}
