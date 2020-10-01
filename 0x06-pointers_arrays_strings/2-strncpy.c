#include "holberton.h"

/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: ksd
 * @n: jashja
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
