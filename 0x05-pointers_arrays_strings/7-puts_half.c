#include "holberton.h"
/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
int c;
int pm;
int d;

for (c = 0; *(str + c) != '\0'; c++)
{
}
if ((c % 2) != 0)
{
pm = (c - 1) / 2;
}
else
{
pm = c / 2;
}
for (d = pm; d <= c; d++)
{
_putchar(*(str + d));
}
_putchar('\n');
}
