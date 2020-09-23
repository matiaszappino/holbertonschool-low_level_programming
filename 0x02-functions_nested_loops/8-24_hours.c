#include "holberton.h"
/**
 * jack_bauer - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
int a, b, c, d;

for (a = 0; a < 3; a++)
{
	for (b = 0; b <= 9; b++)
	{
		if (a == 2 && b == 4)
		{
			break;
		}
		for (c = 0; c <= 5; c++)
		{
			for (d = 0 ; d <= 9; d++)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
			}
		}
	}
}
}
