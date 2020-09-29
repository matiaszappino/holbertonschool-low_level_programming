#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
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
