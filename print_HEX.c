#include "main.h"

/**
 * print_HEX_recur - prints recursively each digit
 * @n: the unsigned integer to print
 *
 * Return: number of characters to print
 */
int print_HEX_recur(unsigned int n)
{
	int count = 0;
	char *HEX = "0123456789ABCDEF";

	if (n / 16)
		count += print_HEX_recur(n / 16);

	count += _putchar(HEX[n % 16]);

	return (count);
}

/**
 * print_HEX - prints an unsigned int in hexadecimal (lowercase)
 * @args: argument list
 *
 * Return: number of characters to print
 */
int print_HEX(va_list args)
{
	int count = 0;
	unsigned int num;

	num = va_arg(args, unsigned int);

	count += print_HEX_recur(num);

	return (count);
}

