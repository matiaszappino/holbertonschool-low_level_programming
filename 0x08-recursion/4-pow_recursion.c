#include <unistd.h>

/**
 * _pow_recursion - writes the character c to stdout
 * @x: The character to print
 * @y: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}

	if (y == 0)
	{
	return (1);
	}

	else
	{
	return (_pow_recursion(x, y - 1) * x);
	}
}
