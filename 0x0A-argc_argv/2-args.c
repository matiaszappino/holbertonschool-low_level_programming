#include <stdio.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: ajshaj
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;
	return (0);
}
