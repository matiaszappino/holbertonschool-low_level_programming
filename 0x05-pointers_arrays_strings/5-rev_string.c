#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{	
	int largo = 0;
        char t1;
	char t2;
	char fin;
	char inicio;

        while (*(s + largo) != '\0')
        {
        largo++;
        }
	while (fin > inicio)
	{	
		t1 = *inicio;
		t2 = *fin;
		*inicio = t2;
		*fin = t1;
	inicio++;
	fin--;
	}
}
