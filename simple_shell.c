#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
size_t prompt(char *pbuffer, size_t);
int read_buffer(char *buffer);

int main(void)
{
    size_t buffsize = 1024;
    char *buffer;
    char *pbuffer = buffer;
    pid_t process;
	int status;

    buffer = (char *)malloc(sizeof(char) * buffsize);
    if (!buffer)
        return (-1); 

    while (1)
    {
        prompt(pbuffer, buffsize);
        read_buffer(buffer);
        if (read_buffer)
        {
            process = fork();
            if (process == 1)
                printf("Error\n");
            if (process > 0)
                wait(&status);
            //if (process == 0)
        }
    }
return (0);
}

/*imprime prompt en pantalla*/
size_t prompt(char *pbuffer, size_t buffsize)
{
    ssize_t l_characters;

    write(STDOUT_FILENO, "$ ", 2);
    getline(&pbuffer, &buffsize, stdin);

    return (l_characters);
}

int read_buffer(char *buffer)
{
    char *token;
	int number_of_tokens= 0;

	token = (char *)strtok(buffer, " ");

    while (token != NULL)
    {
        token = (char *)strtok(NULL, " ");
        number_of_tokens++;
        printf("%s\n", token);
    }
}
