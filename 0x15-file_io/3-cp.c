#include "holberton.h"
/**
 *ifclosefc1 - copies the content of a file to another file
 *@fc1: fc1
 *Return: void
 */
void ifclosefc1(int fc1)
{
	if (fc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc1);
		exit(100);
	}
}
/**
 *ifclosefc2 - copies the content of a file to another file
 *@fc2: fc2
 *Return: void
 */
void ifclosefc2(int fc2)
{
	if (fc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc2);
		exit(100);
	}
}
/**
 *main - copies the content of a file to another file
 *@ac: argument count
 *@av: argument vector
 *Return: 1 on success, -1 on failure
 */
int main(int ac, char **av)
{
	char buffer[1024];
	int fc1, fc2, fo1, fo2;
	int numr = 1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fo1 = open(av[1], O_RDONLY);
	if (fo1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fo2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((numr = read(fo1, buffer, 1024)) > 0)
	{
		if (fo2 < 0 || write(fo2, buffer, numr) != numr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fo1);
			exit(99);
		}

	}

	if (numr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fc1 = close(fo1);
	ifclosefc1(fc1);
	fc2 = close(fo2);
	ifclosefc2(fc2);
	return (0);
}
