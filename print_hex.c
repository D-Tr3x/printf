#include "main.h"

/**
 * print_hex_recur - prints recursively each digit
 * @n: the unsigned integer to print
 *
 * Return: number of characters to print
 */
int print_hex_recur(unsigned int n)
{
	int count = 0;
	char *hex = "0123456789abcdef";

	if (n / 16)
		count += print_hex_recur(n / 16);

	count += _putchar(hex[n % 16]);

	return (count);
}

/**
 * print_hex - prints an unsigned int in hexadecimal (lowercase)
 * @args: argument list
 *
 * Return: number of characters to print
 */
int print_hex(va_list args)
{
	int count = 0;
	unsigned int num;

	num = va_arg(args, unsigned int);

	count += print_hex_recur(num);

	return (count);
}
