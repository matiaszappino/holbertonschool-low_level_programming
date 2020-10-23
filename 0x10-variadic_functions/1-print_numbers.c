#include <stdio.h>
#include <stdarg.h>
/**
 * print_name - function tu print a name
 * @name: the name
 * @f: pointer to char
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list milista;

	va_start(milista, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(milista, int));

		if (separator == NULL)
		{
			separator = "";
		}
		if (!(i == n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(milista);
return;
}
