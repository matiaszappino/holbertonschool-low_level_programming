#include <stddef.h>
/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: action
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for(i = 0; i < size; i++)
		action(array[i]);
} 
