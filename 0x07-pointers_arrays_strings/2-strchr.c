#include <unistd.h>

/**
 * _strchr - writes the character c to stdout
 * @s: The character to print
 * @c: a
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
return (NULL);
}
