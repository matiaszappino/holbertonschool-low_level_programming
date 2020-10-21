#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - writes the character c to stdout
 * @array: pointer
 * @size: name of the dog
 * @cmp: age of the dog
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
			return (i);
	}
return (-1);
}
