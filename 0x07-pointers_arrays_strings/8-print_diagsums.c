#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int diagonal = 0;
	int seconddiagonal = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
		
			if(x == y)
			{
				diagonal = a[x + y];
			}
			if ((x + y) == (size - 1))
				seconddiagonal = a[x + y];
		}
	}
	printf("%i", diagonal);
	printf("%i", seconddiagonal);
}
