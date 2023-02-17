#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - check the the number generated randomly
 *
 * identify whether the number is +ve or -ve or 0
 *
 * print the number with message tell what kinda number it is
 *
 * return - return always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
