#include <unistd.h>

/**
 * set_string - writes the character c to stdout
 * @s: The character to print
 * @to: jajak
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
