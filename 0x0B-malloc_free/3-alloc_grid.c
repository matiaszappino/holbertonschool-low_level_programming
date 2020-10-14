#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - writes the character c to stdout
 * @width: The character to print
 * @height: asda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int i, b;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{

			for (i = i - 1; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
		for (i = 0; i < height; i++)
		{
			for (b = 0; b < width; b++)
			{
				array[i][b] = 0;
			}
		}
return (array);
}
