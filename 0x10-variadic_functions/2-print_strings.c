#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function tu print a name
 * @separator: separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list milista;
	char *strings;

	va_start(milista, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(milista, char*);

		if (separator == NULL)
		{
			separator = "";
		}

		if (strings == NULL)
		{
			printf("(nil)");
		}

		printf("%s", strings);

		if (!(i == n - 1))
		{
			printf("%c ", *separator);
		}
	}
printf("\n");
va_end(milista);
return;
}
