#include "include.h"

/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: jhaja
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			f++;
			break;
			}
		}
	if (s[i] != accept[j])
	{
	break;
	}
	}
return (f);
}
