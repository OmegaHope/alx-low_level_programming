#include "main.h"

/**
 * main - prints a square, followed by a new line.
 *
 * Use the character # to print the square
 * size is 0 or less, the function should print only a new line
 * Return: void type.
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
