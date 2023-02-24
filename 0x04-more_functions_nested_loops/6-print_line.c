#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * _putchar - prints new line and dash
 * @n: is the number of times the character _ should be printed
 * @c: a variable counts the loop
 *
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
		_putchar('\n');
}
