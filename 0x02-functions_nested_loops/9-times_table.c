#include "holberton.h"
/**
 * times_table - writes the tables to stdout
 *
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a < 10 ; a++)
{
_putchar('0');
for (b = 1; b < 10 ; b++)
{
res = a * b;
if (c > 9)
{
_putchar(',');
_putchar(' ');
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else
{
_putchar(',');
_putchar (' ');
_putchar (' ');
_putchar ('0' + c);
}}
_putchar('\n');
}}
