#include "holberton.h"
#include <stdio.h>

/**
 * print_array - writes the character c to stdout
 * @n: The character to print
 * @a: integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int aux;

	for (aux = 0; aux < n; aux++)
	{
	if (aux < n - 1)
	{
	printf("%i", a[aux]);
	putchar(',');
	putchar(' ');
	}
	else
	{
	printf("%i", a[aux]);
	}
	}
putchar('\n');
}
