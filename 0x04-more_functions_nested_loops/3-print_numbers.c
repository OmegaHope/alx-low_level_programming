#include "main.h"

/**
 * print_numbers - prints the numbers from 0-9
 * _putchar - print in character form
 * @n: counter variable
 *
 * Return: void  type.
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
		_putchar(n);

	_putchar('\n');

	return;
}
