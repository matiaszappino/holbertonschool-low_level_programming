#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * read_textfile - Function tu read a textfile
 * @filename: Name of the file
 * @letters: quantity of letters to read
 * Return: The letters it actually could read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int fr;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	fr = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, fr);
	buf[fr + 1] = '\0';

	close(fd);

	return (fr);
}
