#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: ajshs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i, j, res;

	res = 0;

	for (i = 1; i <= argc - 1 ; i++)
	{

		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
		if (*(argv[i] + j) < '0' || (*(argv[i] + j) > '9'))
		{
		printf("Error\n");
		return (1);
		}
		}
		res = res + atoi(argv[i]);
	}
printf("%i\n", res);
return (0);
}
