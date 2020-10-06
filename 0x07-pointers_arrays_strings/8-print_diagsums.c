#include <stdio.h>

/**
 * print_diagsums - writes the character c to stdout
 * @a: The character to print
 * @size: aja
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int x;
	int diagonal = 0;
	int seconddiagonal = 0;

	for (x = 0; x < (size * size); x += size + 1)
	{
	diagonal += a[x];
	}
	for (x = size - 1; x < (size * size - 1); x += size -1)
	{
	seconddiagonal += a[x];
	}
	printf("%i, %i\n", diagonal, seconddiagonal);
}
