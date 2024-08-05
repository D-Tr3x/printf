#include "main.h"

/**
 * print_unsigned_recur - prints each digit recursively
 * @n: unsigned integer to print
 *
 * Return: number of characters to print
 */
int print_unsigned_recur(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned_recur(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_unsigned_decimal - prints an unsigned decimal number
 * @args: argument list of unsigned decimal
 *
 * Return: number of characters to print
 */
int print_unsigned_decimal(va_list args)
{
	int count = 0;
	unsigned int num;

	num = va_arg(args, unsigned int);

	count += print_unsigned_recur(num);

	return (count);
}
