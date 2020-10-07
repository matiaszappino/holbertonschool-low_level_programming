#include "holberton.h"
/**
 *_strspn - function
 *@s: 1st string
 *@accept: st
 *Return: Bytes
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int f = 0;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			f++;
			break;
		}
	}
	if (!(s[i] == accept[j]))
	break;
}
return (f);
}
