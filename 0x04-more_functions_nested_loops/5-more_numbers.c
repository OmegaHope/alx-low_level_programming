#include "main.h"

/**
 * main - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 *
 * Return: void type.
 */

void more_numbers(void)
{
	int n, c;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 15; n++)
		{

			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
