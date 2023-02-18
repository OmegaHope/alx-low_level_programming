#include <stdio.h>

/**
 * main - Prints all single digit of base 10
 * no printf and no puts
 * no char type variable
 *
 * Return: Always 0.
 */
int main(void)
{
	int _10;

	for (_10 = 0; _10 < 10; _10++)
		putchar(_10);

	putchar('\n');

	return (0);
}
