#include <stdio.h>
#include "main.h"
/**
 * _printenv -  function that print the environment variables
 * Return: 0 for success -1 for failure
 */
int _printenv(void)
{
	char **env;

	if (environ == NULL)
		return (-1);
	env = environ;
	while (*env)
	{
		_putstring("%s\n", *env);
		env++;
	}
	return (0);
}
