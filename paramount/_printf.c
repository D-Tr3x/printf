#include "main.h"
#include <stdio.h>

/**
 * _printf - prints any output from format
 * @format - characters or strings to print
 *
 * Return: number of characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;
	const char *p;
	p = format;

	va_start(args, format);

	if (p == NULL)
		return (-1);

	for (; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'c')
				count += print_char(args);
			if (*p == 's')
				count += print_string(args);
			if (*p == '%')
				count += _putchar('%');
			else /* For error statements */
			{
				count += _putchar('%');
				count += _putchar(*p);
			}
		}
		count += _putchar(*p);
	}
	va_end(args);
	return (count);
}
