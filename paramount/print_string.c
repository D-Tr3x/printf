#include "main.h"
#include <stdio.h>

/**
 * print_string - prints a string
 * @args: the argument list
 *
 * Return: number of characters to print
 */
int print_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}

	return(count);
}
