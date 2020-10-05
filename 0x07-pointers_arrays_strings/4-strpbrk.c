#include <unistd.h>

/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: ha
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	int j;
	char *p = &s[i];

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			return (p);
			}
		}
	}
return (NULL);
}
