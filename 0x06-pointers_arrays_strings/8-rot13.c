#include "holberton.h"

/**
 * rot13 - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *s)
{
	{
	int i;
	int j;

	char letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char numeros[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letras[j] != '\0'; j++)
		{
			if (s[i] == letras[j])
			{
				s[i] = numeros[j];
				break;
			}
		}
	}
return (s);
}
}
