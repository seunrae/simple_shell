#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncmp - function that compares two strings based on a given length
 * @str1: first string
 * @str2: second string
 * @n: number of characters to be compared
 * Return: 0 if the strings are equal
 *
 */
int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i = 0;

	for (i = 0; i < n; i++)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		else if (str1[i] != str2[i])
			return ((int)(unsigned char)str1[i] - (int)(unsigned char)str2[i]);
	}
	return (0);
}
/**
 * _getenv - function that gets the value of an environment variable
 * @name: environment variable name
 * Return: the environment variable if sucessful
 */
char *_getenv(const char *name)
{
	size_t len = strlen(name);

	if (name == NULL)
		return (NULL);
	while (*environ != NULL)
	{
		if (_strncmp(*environ, name, len) == 0 && (*environ)[len] == '=')
			return (&(*environ)[len + 1]);
		environ++;
	}
	return (NULL);
}
