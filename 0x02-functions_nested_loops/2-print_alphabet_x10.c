#include "holberton.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
int i;
char a;
a = 97;
for (i = 0; i < 10; i++)
{
while (a <= 122)
{
_putchar(a);
a++;
}
_putchar('\n');
a = 97;
}
}
