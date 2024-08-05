#include "main.h"
/**
 * print_binary_recur - prints each binary recursively
 * @n: the unsigned integer to print
 *
 * Return: Number of characters to print
 */
int print_binary_recur(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary_recur(n / 2);

	count += _putchar((n % 2) + '0');

	return (count);
}


/**
 * print_binary - convert an unsigned int argument to binary,
 * then print it.
 * @args: argument list for unsigned int(s)
 *
 * Return: Number of characters to print
 */
int print_binary(va_list args)
{
	int count = 0;
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	count += print_binary_recur(num);

	return (count);
}
