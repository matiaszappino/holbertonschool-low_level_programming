#include <unistd.h>

/**
 * auxiliar - writes the character c to stdout
 * @n: The character to print
 * @b: aasda
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int auxiliar(int n, int b)
{

	if (b * b == n)
	{
		return (b);
	}

	if (b * b > n)
	{
		return (-1);
	}
	else
	{
	return (auxiliar(n, b + 1));
}
}
/**
 * _sqrt_recursion - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	int b = 2;

	if (n <= 0)
	{
	return (-1);
	}

	if (n == 1)
	{
	return (1);
	}

	else
	{
	return (auxiliar(n, b + 1));
	}
}
