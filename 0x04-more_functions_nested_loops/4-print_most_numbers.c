#include "main.h"

/**
 * main - prints the numbers, from 0 to 9
 * Do not print 2 and 4
 *
 * Return: void type.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n == 50 || n == 52)
			continue;

		_putchar(n);
	}

	_putchar('\n');

	return;
}
