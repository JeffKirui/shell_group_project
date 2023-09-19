#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H
#define MAX_INPUT_SIZE 1024
#define MAX_ARGS 64
#define READ_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

int _strncmp(const char *s1, const char *s2, size_t n);
int _strcmp(char *s1, char *s2);
int my_strlen(const char *s);
char *_strstr(const char *str, const char *substring);
char *_strchr(char str[], char ch);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, const char *src);
int _atoi(char *s);
int _getc(void);

void execute_external_cmd(char *cmd);
void execute_builtin_cmd(char *cmd);
void execute_external_cmd2(char *cmd);

ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

int my_exit(char **av);
#endif
