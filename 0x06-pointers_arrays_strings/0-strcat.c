#include <unistd.h>

/**
 * _strcat - writes the character c to stdout
 * @dest: The character to print
 * @src: chat
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int i, b;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (b = 0; src[b] != 0; i++, b++)
	{
	dest[i] = src[b];
	}
dest[i] = '\0';
return (dest);
}
