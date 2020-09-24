#include <unistd.h>

/**
 * _isdigit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
