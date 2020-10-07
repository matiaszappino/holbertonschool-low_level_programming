#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int asterisco(char *str1, char *str2)
{
	if (*s1 == *s2)
	{
		return(strcmp(s1, s2));
	}
	if (*s1 == '\0')
	{
		return(strcmp(str1, str2));
	}

int wildcmp(char *s1, char *s2)
{
	if (*str2 == '*')
	{
		return (asterisco(str1, str2 + 1));
	}
	if (*str1 == '\0' || str2 == '\0')
	{
		if (*str1 == '\0' && *str2 == '\0')
		{
			return (1);
		}
	return (0);
	}
	if (*str1 == *str2)
	{
		return (strcmp(str1 + 1, str2 + 1);
	}
return (0);
}
}
