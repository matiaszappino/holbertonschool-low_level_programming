#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (a == 100)
		{
			printf("Buzz");
		}
		else if (((a % 5) == 0) && ((a % 3) != 0))
		{
			printf("Buzz ");
		}
		else if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", a);
		}
	}
printf("\n");
return (0);
}
