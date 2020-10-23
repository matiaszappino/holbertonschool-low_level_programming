#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function tu print a name
 * @format: the format
 *
 */
void print_all(const char * const format, ...)
{
	va_list milista;
	int i = 0;
	int j = 0;
	char *str = "";

	op_t estructura[] = {

        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_char_pointer},
        {NULL, NULL}
	};

	va_start(milista, format);

	while (format[i] != '\0' && format)
	{
		while (estructura[j].op != NULL)
		{
			if (format[i] == estructura[j].op[0])
			{
				estructura[j].call(str , milista);
				str = ", ";
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(milista);
}
/**
 * op_add - operation
 * @a: integer a
 * @b: integer b
 * Return: result
 */
void print_char(char *str, va_list milista)
{
        printf("%s%c", str, va_arg(milista, int));
}
/**
 * op_sub - operation
 * @a: integer a
 * @b: integer b
 * Return: result
 */
void print_int(char *str, va_list milista)
{
        printf("%s%i", str, va_arg(milista, int));
}
/**
 * op_mul - operation
 * @a: integer a
 * @b: integer b
 * Return: result
 */
void print_float(char *str, va_list milista)
{
        printf("%s%f", str, va_arg(milista, double));
}
/**
 * op_div - operation
 * @a: integer a
 * @b: integer b
 * Return: result
 */
void print_char_pointer(char *str, va_list milista)
{
        printf("%s%s", str, va_arg(milista, char*));
}
