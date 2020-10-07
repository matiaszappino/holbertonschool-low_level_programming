#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return(-1);
	}
	if (n == 0)
	{
	return (1);
	}

	else
	{
	return(n * factorial(n - 1));
	}
}
