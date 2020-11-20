#ifndef _SHELL_H_
#define _SHELL_H_
#include "shell.h"
#include <string.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#define BUFFSIZE 1024

extern char **environ;
int loop(char *);
void prompt(void);
char *save_buffer(int status);
char **split_buffer(char *pbuffer, int *num, int status);
int execute(char *args[], char *av, char **env_var, char *path, char *buffer);
char *find_path(char **environ, char **args);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
char *split_path(char *path, char **args);
char *_strcat(char *dest, char *src);
int search_builtin(char *token, char **tokens, int status);
int builtin_exit(char *token, char **tokens, int status);
int builtin_env(void);
void free_memory(char **args, char *path, char *av);
/**
 *struct opt - structure of options
 *@reference: character option
 *@function: pointer to function
 */

typedef struct builtin
{
	char *reference;
	int (*function)();
} builtin;
#endif
