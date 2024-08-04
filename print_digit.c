#include "main.h"

/**
 * print_digit - prints a digit or decimal
 * @args: argument list
 *
 * Return: number of characters to print
 */
int print_digit(va_list args)
{
	int count = 0;
	int num, decimal;
	num = va_arg(args);

	if (num == 0)
		return (_putchar('0'));
	if (num < 0)
	{
		count = _putchar('-');
		num = -num;
	}
	while (num > 0)
	{
		decimal = num % 10;
		_putchar(decimal + '0');
		count++;
		num /= 10;
	}
		
	return (count);
}
