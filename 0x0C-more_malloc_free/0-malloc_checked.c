#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - writes the character c to stdout
 * @b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = (void *)malloc(b);

	if (mal == NULL)
	{
	exit(98);
	return (NULL);
	}
return (mal);
}
