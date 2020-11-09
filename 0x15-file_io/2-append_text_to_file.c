#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * append_text_to_file - Function tu read a textfile
 * @filename: Name of the file
 * @text_content: content
 * Return: 1 on success -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, i = 0, fw;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_APPEND | O_WRONLY);

	if (fo == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		fw = write(fo, text_content, i);
		if (fw == -1)
			return (-1);
	}

	close(fo);
	return (1);
}
