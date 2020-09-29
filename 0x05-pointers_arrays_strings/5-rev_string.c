#include "holberton.h"
/**
 * rev_string - writes the character c to stdout
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
	char a = *(s + largo);
	char b = *(s - largo);

        while (*(s + largo) != '\0')
        {
        largo++;
        }
	while (a > b)
	{	
		t1 = a;
		t2 = b;
		a = t2;
		b = t1;
	largo --;
	}
}
