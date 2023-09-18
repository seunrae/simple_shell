#ifndef MAIN_H
#define MAIN_H
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
int _printenv();
#endif
