#include "main.h"

/**
 * print_digit_recur - prints each digit recursively
 * @n: unsigned integer to print
 *
 * Return: number of characters to print
 */
int print_digit_recur(unsigned int n)
{
    int count = 0;

    if (n / 10)
        count += print_digit_recur(n / 10);

    count += _putchar((n % 10) + '0');

    return (count);
}


/**
 * print_digit - prints a digit or decimal
 * @args: argument list
 *
 * Return: number of characters to print
 */
int print_digit(va_list args)
{
	int count = 0;
	int num;
	unsigned int decimal;
	
	num = va_arg(args, int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 0)
	{
		count += _putchar('-');
		decimal = -num;
	}
	else
		decimal = num;

	count += print_digit_recur(decimal);
		
	return (count);
}
