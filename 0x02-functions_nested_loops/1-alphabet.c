#include "holberton.h"

/**
 *print_alphabet- use only user defined variables to create output
 *
 *Return: print to stdout the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
