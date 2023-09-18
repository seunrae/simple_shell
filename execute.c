#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <sys/wait.h>
#define MAX_SIZE 1024
void _exec(char *command, char *argv);
/**
 * _exec - contains the main execve function
 * @command: string input
 * @argv: string input
 * Return: void
 *
 */
void _exec(char *command, char *argv)
{
	char *paths[MAX_SIZE], *args[MAX_SIZE], *env[] = {NULL};
	int i, count = pathlist(argv, paths);

	parse_input(command, args);
	if (_strcmp(command, "/bin/ls") == 0)
	{

		if (execve(command, args, env) == -1)
		{
			_puterror("%s: 1: %s: command not found", argv, args[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			char full_path[MAX_SIZE];

			_strcpy(full_path, paths[i]);
			_strcat(full_path, "/");
			_strcat(full_path, args[0]);
			if (execve(full_path, args, env) == -1)
				continue;
		}
		_puterror("%s: 1: %s: command not found", argv, args[0]);
		exit(EXIT_FAILURE);
	}
}

/**
 * execute - executes a command from the stdin or terminal
 * @command: command to be executed
 * @argv: first string in the terminal
 * Return: 0 on success -1 on failure
 *
 */
int execute(char *command, char *argv)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		_puterror("%s: 1: could not fork", argv);
		return (-1);
	}
	else if (pid == 0)
	{
		_exec(command, argv);
	}
	else
	{
		int status;

		if (waitpid(pid, &status, 0) == -1)
		{
			_puterror("%s:", argv);
			return (0);
		}
	}
	return (0);
}
