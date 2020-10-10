#include <stdlib.h>
#include <stdio.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: ajshs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc > 2)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = a * b;

	printf("%i\n", res);
	}

	else
	{
		printf("Error\n");
		return (1);
	}


return (0);
}
