#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * _putchar - prints square one by one
 * @size: the size of the square to be printed
 * @i: a variable used to print the height
 * @j: a variable used to print the width
 *
 */

void print_square(int size)
{
	int i, j;

	if ( size <= 0)
		_putchar('\n');

	for (i = 1; i <= size;i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

}
