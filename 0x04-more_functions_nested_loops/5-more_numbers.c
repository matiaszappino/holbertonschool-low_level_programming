#include "holberton.h"
/**
 * more_numbers - print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int a;
	int b;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
		_putchar(b % 10 + '0');
		}
	_putchar('\n');
	}
}
