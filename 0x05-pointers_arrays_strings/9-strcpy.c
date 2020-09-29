#include <stdio.h>
/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: Source
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	for (n = 0; *(src + n) != '\0' ; n++)
	{
	}
	if (n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			dest[i] = src[i];
		}
	}
return (dest);
}
