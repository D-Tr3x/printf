#include "main.h"
#include <stdio.h>

/**
 * _printf - prints any output from format
 * @format: characters or strings to print
 *
 * Return: number of characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *p;

	p = format;

	if (p == NULL)
		return (-1);

	va_start(args, format);

	for (; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '\0')
				return (-1);

			if (*p == 'c')
				count += print_char(args);
			else if (*p == 's')
				count += print_string(args);
			else if (*p == '%')
				count += print_percent(args);
			else /* For error statements */
			{
				count += _putchar('%');
				count += _putchar(*p);
			}
		}
		else /* For error handling */
			count += _putchar(*p);
	}
	va_end(args);
	return (count);
}
