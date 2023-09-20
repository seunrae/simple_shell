#ifndef MAIN_H
#define MAIN_H
#define MAX_SIZE 1024
#include <unistd.h>
extern char **environ;
char *take_input(char *input, int mode);
int parse_input(char *input, char *args[]);
int _putchar(char c);
void execute_command(char *command, char *argv);
void _puterror(const char *format, ...);
int execute(char *command, char *argv);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int pathlist(char *argv, char *paths[]);
void _exec(char *command, char *argv);
int _strcmp(const char *str1, const char *str2);
void _putstring(const char *format, ...);
int _printenv(void);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_getenv(const char *name);
int _atoi(const char *str);
void _exitcode(char *input);
char *_strtok(char *str, const char *delim);
#endif
