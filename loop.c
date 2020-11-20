/**
 * loop - loop.
 * @av: name of the program passed.
 * Return: 0 to EXIT_SUCCESS.
 */
#include "shell.h"
int loop(char *av)
{
	char *buffer = NULL;
	char **args = NULL;
	int num_of_tokens = 0;
	int *num = &num_of_tokens;
	int i, process;
	char *strPath = NULL;
	int status = 1;
	
	while (status)
	{
	if (isatty(STDIN_FILENO))
		prompt();
	  buffer = save_buffer(status);
	  if (buffer == NULL)
	  continue;
	  /*printf("Buffer en MAIN = %s Fin de BUFFER\n", buffer);*/
	  args = split_buffer(buffer, num, status);
	  if (args == NULL)
	  continue;
	  /*printf("Numero de tokens = %d\n", num_of_tokens); */
	  strPath = find_path(environ, args);
	  /*printf("PATH EN MAIN %s\n", strPath);*/
	  process = execute(args, av, environ, strPath, buffer);
	    
	  /*for (i = 0; i < 5; i++) 
	    printf("ARGUMENTOS en %i, %s\n ", i, args[i]); */
	}
	
	return (0);
}
