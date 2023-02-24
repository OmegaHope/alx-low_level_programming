#include "main.h"
/**
 * main - draws a straight line in the terminal.
 *
 * n is the number of times the character _ should be printed
 *
 * The line should end with a \n
 *
 * Return: void type.
 */

void print_line(int n)
{
	int c = n;

	while(c > 0)
	{
		_putchar('_');
		c--;
	}

	if (c <= 0)
	{
		_putchar('\n');
	}
}
