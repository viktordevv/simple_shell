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
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/syscall.h>

typedef struct commander
{
	char *variable;
	int (*b)();
} commander_t;

#define BUFF_SZ 1024
#define DELIM " \t\n"
#define TRUE 0
#define FALSE -1
#define N NULL

extern char **environ;

int _strlen(char *s);
int _strcomp(char *path, char *match, size_t n);
char *_strcopy(char *dest, char *src);
char *_strcat(char *conc1, char *conc2);
char **supertoken(char *str);
char *read_the_line();
int exit_hell(void);
int ptr_env(void);
char *envget(void);
char *dir_path(char *path);
char *get_built(char *comm, char *dirc);
char *_charlocate(char *s, char c);
void _itoa(long i, char *str);
void hell_error(int no_error, char *msg, long c);
int(*find_command(char *f))(void);
int cnt(char *str, char *limit);
int forky_ts(void);

#endif