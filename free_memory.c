#include "shell.h"
/**
 * free_memory - free memory
 * @args: arguments
 * Return: void
 */
void free_memory(char **args, char *path, char *buffer)
{
    int i = 0;
    
     
    free(args);

       
    free(buffer);

  
    free (path);
}
