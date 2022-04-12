#ifndef HELL_H
#define HELL_H

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/wait.h>

extern char **hell_env;

typedef struct built
{
	char *variable;
	int (*b)();
} built_t;

#define BUFF_SZ 1024
#define TOK_BUFF_SIZE 64
#define DELIM " \t\n"


int _strlen(char *s);
int _strcomp(char *s1, char *s2);
char *_strcopy(char *dest, char *src);
char *_strcat(char *conc1, char *conc2);
char **supertoken(char *str);
char *read_the_line();
int exit_hell(void);
int ptr_env(void);
char *env_get(const char *name);
char *dir_path(char *path);
char *get_built(char *comm, char *dirc);









#endif
