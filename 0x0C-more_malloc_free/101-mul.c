#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - Prints the result of a multiplication
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, mul;

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
	mul = num1 * num2;
	printf("%lu", mul);
	return (0);
}
