#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function to sum them all
 * @n: n number of arguments
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list milista;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(milista, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(milista, int);
	}

	va_end(milista);
	return (sum);
}
