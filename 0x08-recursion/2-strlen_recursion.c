#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	return (i);
	}
	
	if (*s != '\0')
	{
	i = i + _strlen_recursion(s + 1) + 1;
	}
return (i);
}
