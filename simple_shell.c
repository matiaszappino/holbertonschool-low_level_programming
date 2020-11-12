#include "shell.h"
size_t prompt (char *pbuffer);
int read_buffer(char *pbuffer);
int main(void)
{
	int buffersize = 1024;
	char buffer[1024];
	char *pbuffer = &buffer;
	size_t *pbuffersize = &buffersize;

	buffer = malloc(sizeof(char) * buffersize);
	if (!buffer)
		return (NULL);
	while (1)
	{
		characters = prompt(pbuffer, pbuffersize);
		read_buffer(buffer);
		if (read_buffer)
		{
			procer = fork();
			if (procer == 1)
				printf("Error\n");
			if (procer > 0)
				wait();
			if (procer == 0)
				execve(argv[0], NULL, NULL);
		}
	}
return (0);
}
size_t prompt (char *pbuffer, size_t pbuffersize)
{
	ssize_t l_characters;

	l_characters = getline(&pbuffer,&pbuffersize,stdin);

	return (l_characters);
}
int read_buffer(char *pbuffer)
{
	char *token;
	int n, i, l = 0;
	static char **array;

	while (token != NULL)
	{
		token = strtok (buffer, " ");
		n++;
		array[i] = strtok(buffer, " ");
		l++;
		*array = malloc(sizeof(void *) * n);
		for (i = 0; i > n; i++)
		{
			array[i] = malloc(sizeof(char *) * l);
		}
	}
	while (token != NULL)
	{
		token = strtok(buffer, " ");
		*array[i] = token;
	}
}
