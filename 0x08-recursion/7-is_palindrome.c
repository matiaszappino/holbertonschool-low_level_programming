#include "holberton.h"

/**
 * _strlen_recursion - writes the character c to stdout
 * @s: The character to print
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
/**
 * auxiliar - writes the character c to stdout
 * @s: The character to print
 * @count: asas
 * @len: asad
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int auxiliar(char *s, int count, int len)
{
	if (count >= len - 1)
	{
	return (1);
	}
	if (count < len && s[count] == s[len])
	{
	return (auxiliar(s, count + 1, len - 1));
	}
return (0);
}
/**
 * is_palindrome - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int count = 0;
	int len = _strlen_recursion(s);

	return (auxiliar(s, count, len - 1));
}
