#include "holberton.h"

/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: jhsjhd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int c;
	int i = 0;

	while (i < n - 1)
	{
		c = a[i];
		a[i] = a[n - 1];
		a[n - 1] = c;
		i++;
		n--;
	}
}
