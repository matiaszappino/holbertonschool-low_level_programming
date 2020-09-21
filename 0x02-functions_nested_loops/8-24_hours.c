#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int var;
	var = '9';
		for(a = '0'; a <= '2'; a++)
		{
			for (b = '0'; b <= var; b++)
			{
				for (c = '0'; c <= '5'; c++)
				{
					for (d = '0'; d <= '9'; d++)
					{
						if (a == '2')
						{
							var = '3';
						}
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
		}
}
