#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * parse_input - tokenizes a string and stores it in an array
 * @input: string to be split
 * @args: array to store the string
 * Return: 0
 *
 */
int parse_input(char *input, char *args[])
{
	char *token = strtok(input, " ");
	int count = 0;

	while (token != NULL)
	{
		args[count] = token;
		count++;
		token = strtok(NULL, " ");
	}
	args[count] = NULL;
	return (0);
}
