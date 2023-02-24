#include "main.h"

/**
 * main -  draws a diagonal line on the terminal.
 * n is the number of times the character \ should be printed
 * The diagonal should end with a \n
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
