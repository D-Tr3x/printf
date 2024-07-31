#include "main.h"
/**
 * print_char - prints a character
 * @args: argument list
 *
 * Return: number of characters
 */

int print_char(va_list args)
{
	char c;

	c = va_args(args, int);
	return(_putchar(c));
}
