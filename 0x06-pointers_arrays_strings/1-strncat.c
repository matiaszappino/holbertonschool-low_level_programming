#include "holberton.h"
/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: shijs
 * @n: jhsja
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, b;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (b = 0; (src[b] != 0) && (b < n);)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
return (dest);
}
