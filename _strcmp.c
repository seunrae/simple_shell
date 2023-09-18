#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @str1: input string
 * @str2: input string
 * Return: result of the compared string 0 if they are equal
 *
 */
int _strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
