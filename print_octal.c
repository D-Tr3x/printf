#include "main.h"

/**
 * print_octal_recur - prints recursively each digit in octal
 * @n: the unsigned integer to print
 *
 * Return: number of characters to print
 */
int print_octal_recur(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal_recur(n / 8);
	count += _putchar((n % 8) + '0');

	return (count);
}
/**
 * print_octal - prints an unsigned int in octal
 * @args: argument list with unsigned integers
 *
 * Return: number of characters to print
 */
int print_octal(va_list args)
{
	int count = 0;
	unsigned int num;

	num = va_arg(args, unsigned int);

	count += print_octal_recur(num);

	return (count);
}
