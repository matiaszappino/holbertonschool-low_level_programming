#include <unistd.h>

/**
 * mul - multiplies two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	return (a * b);
}
