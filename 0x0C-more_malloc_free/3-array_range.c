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
	if (min > max)
	{
		return (NULL);
	}


