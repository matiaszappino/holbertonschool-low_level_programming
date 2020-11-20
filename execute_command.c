#include "shell.h"
/**
 * execute - function that execute all arguments in command line.
 * @args: Arguments typed into the line command.
 * @env_var: env variable
 * @path: path of the program.
 * @av: command
 * Return: No return.
 */
int execute(char *args[], char *av, char **env_var, char *path, char *buffer)
{
	pid_t pid;
	int status;
	int errorstatus = 0;

	pid = fork();

	if (pid < 0)
		perror(av);

	if (pid == 0)
	{
		if (execve(args[0], args, env_var) == -1)
		{
			if (execve(path, args, env_var) == -1)
			{
				perror(av);
				exit(127);
			}
		}
		else
			exit (127);
	}
	else
		wait(&status);
		/*if (WIFEXITED(status))
			errorstatus = WEXITSTATUS(status);*/

	free_memory(args, path, buffer);
	return (pid);
}
