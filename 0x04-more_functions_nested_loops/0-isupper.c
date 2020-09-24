#include <unistd.h>
#include "holberton.h"

/**
 * _isupper - checks for uppercase letter
 * @c: The int to check if is upper
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
