#include <stdio.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: jajska
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	(void)argv;
	return (0);
}
