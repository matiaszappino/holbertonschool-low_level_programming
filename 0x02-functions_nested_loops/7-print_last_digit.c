#include "holberton.h"
/**
 * print_last_digit - function
 * @a: The character to print
 *
 * Return: On success 1.
 */
int print_last_digit(int a)
{
int lastDigit;
if (a < 0)
{
lastDigit = (a * -1) % 10;
}
else
{
lastDigit = a % 10;
}
_putchar('0' + lastDigit);
return (lastDigit);
}
