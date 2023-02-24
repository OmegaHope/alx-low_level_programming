#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * _putchar - print character needed
 * @n: is the number of times the character \ should be printed
 * @c: a variable counts to print the width
 * @i: a variable counts to print the height
 *
 * Return: void type.
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;

	if (n <= 0)
		_putchar('\n');

	 while (n > 0)
	 {
		i = c;

		 while (i > 0)
		 {
			 _putchar(' ');

			 i--;
		 }

		 _putchar('\\');
		 _putchar('\n');

		 c++;
		 n--;

	}
}
