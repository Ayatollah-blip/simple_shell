#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* environment variables */
extern char **environ;

/* string handlers */
ssize_t _strcmp(char *s1, char *s2);
ssize_t _strlen(char *s);
ssize_t _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void execution(char *cp, char **cmd);
char *find_path(void);

/* Function of simple shell */
/* --------------------------------------- */

/* execute instruction */
void execute(char *cp, char **cmd);
/* free pointer */
void Free(char **buf);
/* print */
void _printStr(char *str, ssize_t len);
/* READLINE */
char *Readline(void);
/* exit */
void EXIT(char **command, char *line)

/* -------------------------------------- */

#endif /* SHELL_H */
