#include "holberton.h"

/**
 * leet - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
	int i;
	int j;

	char letras[] = "aAeEoOtTlL";
	char numeros[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letras[j] != '\0'; j++)
		{
			if (s[i] == letras[j])
			{
				s[i] = numeros[j];
			}
		}
	}
return (s);
}
