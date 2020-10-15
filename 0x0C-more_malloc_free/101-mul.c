#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count elements
 * @argv: elements
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	long int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	if (num1 == 0 && *argv[1] != 48)
	{
		printf("Error\n");
		exit(98);
	}
	num2 = atoi(argv[2]);
	if (num2 == 0 && *argv[2] != 48)
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}
