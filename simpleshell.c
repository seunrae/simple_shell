#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * main - main code of the UNIX command line interpreter.
 * @ac: number of arguements on terminal
 * @argv: array of string of input form the terminal
 * Return: always 0
 */
int main(int ac, char **argv)
{
	char *buffer = NULL, *input = NULL;
	int interactive_mode = isatty(STDIN_FILENO);

	while (1)
	{
		if (interactive_mode)
		{
			printf("[$] ");
			fflush(stdout);
		}
		free(input);
		input = take_input(buffer, interactive_mode);
		if (input == NULL)
			break;
		if (_strcmp(input, "exit") == 0)
			exit(EXIT_FAILURE);
		if (_strcmp(input, "env") == 0)
		{
			if(_printenv() == -1)
				_puterror("%s: 1: environment variables could not be found", argv[0]);
		}
		if (ac < 1)
		{
			_puterror("no arguments passed");
		}
		execute_command(input, argv[0]);
	}
	free(buffer);
	return (0);
}