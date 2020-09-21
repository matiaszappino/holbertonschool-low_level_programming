#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{	
	char a;
	a = 97;
	while (a <= 122)
{	
	_putchar(a);
	a++;
}
	_putchar('\n');
}
