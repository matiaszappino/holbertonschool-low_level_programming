#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function tu print a name
 * @format: the format
 *
 */
typedef struct miestructura
{
        char *op;
        void (*call)();
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *str, va_list milista);
void print_int(char *str, va_list milista);
void print_float(char *str, va_list milista);
void print_char_pointer(char *str, va_list milista);
#endif
