#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "main.h"
#include <string.h>
/**
 * execute_command - accepts a command from standard input and executes it
 * @command: command form standard input
 * @argv: first argument from command line
 *
 * Return: void
 */
void execute_command(char *command, char *argv)
{
	execute(command, argv);
}
