#include <unistd.h>
#include "holberton.h"
/**
 * print_square - writes the character c to stdout
 * @size: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)

	{
	for (a = 0; a < size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (a == size)
			{
				break;
			}
			else
			{
				_putchar('#');
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
