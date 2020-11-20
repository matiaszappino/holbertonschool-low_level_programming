#include "shell.h"
/**
 * search_builtin - searches token in builtin functions
 * @token: token
 * Return: 0 if token was not found
 */
int search_builtin(char *token, char **tokens, int status)
{
	unsigned int j = 0;
	builtin op_func[] = {{"exit", builtin_exit}, {"env", builtin_env}, {NULL, NULL}};

	/*printf("TOKEN EN BUILTIN = %s\n", token);*/
	
	while (op_func[j].reference != NULL)
	{
		if (_strcmp(token, op_func[j].reference) == 0 && (_strlen(token) == _strlen(op_func[j].reference)))
			{
				op_func[j].function(token, tokens);
				/*return (0);*/
			}
		j++;
	}
	return (1);
}
/**
 * builtin_exit - exit builtin function
 * @token: token
 * Return: exit
 */
int builtin_exit(char *token, char **tokens, int status)
{
	int n;

	if (!token)
		return (0);
	n = _strlen(token);
	if (n == 4)
		if (token)
		if (!_strncmp("exit", token, 4))
		{
			free(token);
			free(tokens);
			exit(status);
		}
	return (0);
}
/**
 * builtin_env - env builtin function
 * @token: token
 * Return: 0
 */
int builtin_env(void)
{
	int i = 0;

    while (environ[i] != NULL)
    {
		//NO SE PUEDE USAR PRINTF//MODIFICAR
        printf("%s\n", environ[i]);
        i++;
    }
	return (0);
}