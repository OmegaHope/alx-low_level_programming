#include "main.h"
/**
 * print_triangle - print triangle using '#' character
 * _putchar - prints character
 * @size: the size of triangle to be printed
 * @c: a variable counts the loop
 * @l: a variable counts the loop
 *
 */

void print_triangle(int size)
{
	int c, l;

	if (size <= 0)
		_putchar('\n');

	for (c = 1; c <= size; c++)
	{
		for (l = c; l < size; l++)
			_putchar(' ');

		for (l = 1; l <= c; l++)
			_putchar('#');

		_putchar('\n');
	}
 }
