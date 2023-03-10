#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * printf - prints output in organized manner
 * @n: a variable counts the loop
 * Description: for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: always return zero(0).
 */

int main()
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");

	return (0);
}
