#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;

	while (i < (atoi(argv[1]) - 1))
	{
		printf("%02x ", *p);
		i++;
		p++;
	}
printf("%x02\n", *p);
return (0);
}
