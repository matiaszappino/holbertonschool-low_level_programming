#include <unistd.h>

/**
 * _strstr - writes the character c to stdout
 * @haystack: The character to print
 * @needle: a
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j;
		char *p = &haystack[i];

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[0])
			{
			return (p);
			}
		}
	}
return (NULL);
}