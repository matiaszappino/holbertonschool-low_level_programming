#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
c = 97;
while (c < 122)
if(c != 101 && c != 113){ 
putchar (c);
c++;
}
else
{
c++;
}
putchar ('\n');
return (0);
}
