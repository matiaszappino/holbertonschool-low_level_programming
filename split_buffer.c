#include "shell.h"
/**
 * split_buffer - function separate the string in tokens
 * @pbuffer: string
 * @num: number
 * Return: a double pointer with tokens
 */
char **split_buffer(char *pbuffer, int *num, int status)
{
	char *token = NULL;
	unsigned int i = 0;
	char **tokens = malloc(sizeof(char *) * BUFFSIZE);
	
	if (!tokens)
		exit(EXIT_FAILURE);

	token = strtok(pbuffer, " ");
	/*printf("TOKEN EN SPLIT = %s\n", token);*/
	if (search_builtin(token, tokens, status) != 0)
	{
		while (token != NULL)
		{
			tokens[i] = token;
			i++;
			*(num) = i;
			token = strtok(NULL, " ");
		}
	}
	tokens[i] = NULL;
	free(token);
	return (tokens);
}
