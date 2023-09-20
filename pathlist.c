#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * pathlist - appends the list to path environment variables to an array
 * @argv: first string in the terminal
 * @paths: array of string
 * Return: number of strings in the array
 */
int pathlist(char *argv, char *paths[])
{
	int count = 0;
	char *path = _getenv("PATH");

	if (path != NULL)
	{
		char *token = _strtok(path, ":");

		while (token != NULL)
		{
			paths[count] = token;
			token = _strtok(NULL, ":");
			count++;
		}
	}
	else
	{
		_puterror("%s: 1: PATH environment variable not found", argv);
	}
	paths[count] = NULL;
	return (count);
}
