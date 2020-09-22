#include "holberton.h"
/**
 * print_last_digit - writes the character c to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int a)
{
int lastDigit;
if (a < 0)
{
a = -a;
}
lastDigit = a % 10;
_putchar('0' + lastDigit);
return (lastDigit);
}
