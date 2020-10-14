#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - writes the character c to stdout
 * @grid: The character to print
 * @height: asda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
