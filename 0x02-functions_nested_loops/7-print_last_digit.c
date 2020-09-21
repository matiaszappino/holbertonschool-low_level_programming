#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int a)
{	
	int lastDigit;
	
	if (a < 0)
{	
	a = -a;
}	
	else
{
	a = a;
}
	lastDigit = a % 10;
	_putchar('0' + lastDigit);
	return (lastDigit);
}
