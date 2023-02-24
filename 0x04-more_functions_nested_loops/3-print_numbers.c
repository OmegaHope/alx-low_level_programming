#include "main.h"

/**
 * main - prints the numbers from 0-9
 * followed by a new line
 *
 * Return: void return type.
 */

void print_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
		_putchar(n);

	_putchar('\n');

	return;
}
