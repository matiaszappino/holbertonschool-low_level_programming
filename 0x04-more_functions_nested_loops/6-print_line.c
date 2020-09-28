#include "holberton.h"
/**
 *print_line - d
 *@n: integer
 *
 *Return - print line n spaces long to stdout; print newline if n<=0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
