#include <stdio.h>
#include <stdbool.h>
#include <string.h>
static char *end_token;
static bool tok;
/**
 * _strtok -  function that splits a string by a given delimeter
 * @str: input string
 * @delim: condition in which the string is split
 * Return: first split string
 */
char *_strtok(char *str, const char *delim)
{
	char *start;

	if (str != NULL)
	{
		end_token = str;
		tok = false;
	}

	if (end_token == NULL)
		return (NULL);
	start = end_token;
	if (tok)
	{
		while (*end_token != '\0' && strchr(delim, *end_token) != NULL)
			end_token++;
	}
	while (*end_token != '\0' && strchr(delim, *end_token) == NULL)
		end_token++;

	if (start == end_token)
		return (NULL);
	if (*end_token != '\0')
	{
		*end_token = '\0';
		end_token++;
		tok = true;
	}
	else
		tok = false;

	return (start);
}
