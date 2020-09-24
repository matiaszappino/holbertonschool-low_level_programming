#include <unistd.h>
#include "holberton.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)

	{
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				break;
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
else
	{
		_putchar('\n');
}
}
