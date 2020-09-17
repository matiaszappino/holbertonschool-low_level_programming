#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
c = '00';
while (c <= '99')
{
putchar (c);
if (c == '99')
{
}
else
{
putchar (',');
putchar (' ');
}
c++;
}
putchar ('\n');
return (0);
}
