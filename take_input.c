#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * take_input - accepts an input from the stdin formats it and returns it
 * @input: a character buffer
 * @mode: mode of input (either from terminal or stdin)
 * Return: formatted input
 */
char *take_input(char *input, int mode)
{
	size_t size = 0;
	ssize_t read = getline(&input, &size, stdin);

	if (read == -1)
	{
		if (mode)
			_putchar('\n');
		return (NULL);
	}
	if (input[read - 1] == '\n')
		input[read - 1] = '\0';

	return (input);
}
