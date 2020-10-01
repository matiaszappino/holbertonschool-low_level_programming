#include <unistd.h>

/**
 * cap_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		if ((s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
			|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
			|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
			|| s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
return (s);
}
