#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * create_file - Function tu read a textfile
 * @filename: Name of the file
 * @text_content: content
 * Return: 1 on success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fo, i = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	fo = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fo == -1)
		return (-1);

	if (i == 0)
		write(fo, "", 0);
	else
		write(fo, text_content, i);

	close(fo);
	return (1);
}
