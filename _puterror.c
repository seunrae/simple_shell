#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _puterror - prints a string to the standard error
 * @format: string to be printed
 * Return: void
 */
void _puterror(const char *format, ...)
{
	va_list args;

	if (format == NULL)
		return;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (*str != '\0')
				{
					write(2, str, 1);
					str++;
				}
			}
			else
				write(2, format, 1);
		}
		else
			write(2, format, 1);
		format++;
	}
	_putchar('\n');
	va_end(args);
}
