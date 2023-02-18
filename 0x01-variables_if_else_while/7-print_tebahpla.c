#include <stdio.h>

/**
 * main - prints the lower case alphabet in reverse
 * only putchar. no printf. no puts.
 * putchar twice.
 *
 * Description: all lower case printed reverse.
 * Return: always return zero(0).
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
