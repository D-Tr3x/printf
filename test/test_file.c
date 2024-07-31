#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*	int len;*/

	/* len = _printf("A simple statement or sentence\n"); */
	_printf("Character: [%c]\n", 'H');
	printf("Character: [%c]\n", 'H');

	_printf("Another string: [%s]\n", "I am a string !");
	printf("Another string: [%s]\n", "I am a string !");

	_printf("Percent: [%%]\n");
	printf("Percent: [%%]\n");

	return (0);
}
