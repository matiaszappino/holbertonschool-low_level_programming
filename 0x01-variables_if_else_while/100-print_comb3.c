#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
int a;
int b;

for (a = 48; a <= 57; a++)
{	
		for (b = 48; b <= 57; b++)
		{	
			if (a == b || a > b)
			{	
			continue;
			}
			putchar (a);
			putchar (b);
			if (a != 57 || b != 57)
                        {
                                putchar(',');
                                putchar(' ');
                        }
		}
}
putchar('\n');
return (0);
}
