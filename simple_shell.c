#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
ssize_t prompt(char *pbuffer, size_t buffsize);
char** read_buffer(char *buffer);
int count_tokens(char *buffer);
int main(void)
{
        size_t buffsize = 1024;
        char *buffer;
        char *pbuffer = buffer;
        pid_t process;
        int status;
        int num_of_tokens = 0;
	char **hola;

        buffer = malloc(sizeof(char) * buffsize);
        if (!buffer)
                return (-1);
        while (1)
        {
                prompt(pbuffer, buffsize);
                num_of_tokens = count_tokens(pbuffer);
                hola = read_buffer(pbuffer);
                printf("Numero de tokens = %d\n", num_of_tokens);
        }
        return (0);
}
/*imprime prompt en pantalla*/
ssize_t prompt(char *pbuffer, size_t buffsize)
{
        ssize_t l_characters;
        write(STDOUT_FILENO, "$ ", 2);
        /*guarda linea de comandos en buffer*/
        l_characters = getline(&pbuffer, &buffsize, stdin);
        return (l_characters);
}
char** read_buffer(char *buffer)
{
        char **args;
        char *token;
        int i = 0;
	int j;

	for (j = 0; j < 8; j++)
	{
		args[j] = malloc(sizeof(char*) * 20);
	}

        if(!args)
                return (NULL);
        /*separo primer token*/
        token = strtok(buffer, " ");
        while (token != NULL)
        {
                /*guardo token en array de punteros*/
                args[i] = token;
                i++;
                /*printf("%s\n", args[i]);*/
                token = strtok(NULL, " ");
        }
        return (args);
}
/*cuenta tokens*/
int count_tokens(char *buffer)
{
        int num_tokens = 0;
        char * token;
        token = strtok(buffer, " ");
        while (token != NULL)
        {
                num_tokens++;
                token = strtok(NULL, " ");
        }
        return (num_tokens);
}
