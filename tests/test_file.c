#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len1, len2;

	len1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	_printf("Character: [%c]\n", 'H');
	printf("Character: [%c]\n", 'H');

	_printf("Another string: [%s]\n", "I am a string !");
	printf("Another string: [%s]\n", "I am a string !");

	_printf("Percent: [%%]\n");
	printf("Percent: [%%]\n");

	printf("Length returned by _printf: %d\n", len1);
	printf("Length returned by printf: %d\n", len2);

	_printf("%d\n", 1024);
	printf("%d\n", 1024);

	_printf("%d\n", -2048);
	printf("%d\n", -2048);

	_printf("%d\n", 0);
	printf("%d\n", 0);

	

	return (0);
}
