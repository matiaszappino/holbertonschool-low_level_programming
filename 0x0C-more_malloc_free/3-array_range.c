#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - writes the character c to stdout
 * @min: The character to print
 * @max: asda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
	array[i] = min;
	}
return (array);
}
