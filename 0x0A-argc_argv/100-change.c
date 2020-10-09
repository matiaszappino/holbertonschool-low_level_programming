#include <stdio.h>
#include <stdlib.h>
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: ajshs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int saldo, monedas;

	saldo = 0;
	monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	saldo = atoi(argv[1]);

	if (saldo < 0)
	{
		printf("0\n");
	}
	else
	{

		for (; saldo - 25 >= 0; saldo -= 25, monedas++)
		{
		}
		for (; saldo - 10 >= 0; saldo -= 10, monedas++)
		{
		}
		for (; saldo - 5 >= 0; saldo -= 5, monedas++)
		{
		}
		for (; saldo - 2 >= 0; saldo -= 2, monedas++)
		{
		}
		if (saldo == 1)
		{
			monedas++;
		}

		printf("%i\n", monedas);
	}
return (0);
}
