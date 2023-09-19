#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _exitcode - function to exit a code with a number
 * @input: input string
 */
void _exitcode(char *input)
{
	int count;
	char *str = malloc(sizeof(input));
	char *args[MAX_SIZE];

	_strcpy(str, input);
	count = parse_input(str, args);
	if (count > 0 && _strcmp(args[0], "exit") == 0)
	{
		if (count > 1)
		{
			int status = _atoi(args[1]);

			free(str);
			exit(status);
		}
		else
		{
			free(str);
			exit(0);
		}
	}
	free(str);
}
