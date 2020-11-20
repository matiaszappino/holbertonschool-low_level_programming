#include "shell.h"
/**
 * save_buffer - function that saves buffer
 * Return: a double pointer with the buffer
 */
char *save_buffer(int status)
{
	char *buffer = NULL;
	/*char **pbuffer = &buffer;*/
	size_t size = 0;
	ssize_t n;

	n = getline(&buffer, &size, stdin);

	if (n == EOF)
	{
		free(buffer);
		exit(status);
	}
	if (n == 1)
	{
		free(buffer);
		return (NULL);
	}
	buffer[n - 1] = 0;
	
	return (buffer);
}
