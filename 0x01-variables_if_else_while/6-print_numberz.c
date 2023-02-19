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
	int base;

	for (base = 0; base < 10; base++)
		putchar((base%10) + '0' );

	putchar('\n');

	return (0);
}
