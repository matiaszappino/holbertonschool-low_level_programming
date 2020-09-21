#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{	
	_putchar(43);
	return(1);
	}

	if (n == 0)
	{
	_putchar(0);
	return (0);
	}

	if (n < 0)
	{
	_putchar(45);
	return(-1);
	}
return (0);
}
