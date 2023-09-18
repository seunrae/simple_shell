#include <stdio.h>
/**
 * _strcpy - copies the content of one string to another string
 * @dest: string to copy into
 * @src: string to be copied
 * Return: string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
