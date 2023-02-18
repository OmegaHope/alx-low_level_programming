#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: Numbers must be separated by ',', followed by a space
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 *
 * Return: always return zero(0).
 */

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 == 7)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
