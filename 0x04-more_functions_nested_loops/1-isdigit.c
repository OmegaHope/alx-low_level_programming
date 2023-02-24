#include "main.h"

/**
 * main - checks for integer
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked and return 1 if it is digit
 * Description: int to be checked and return 1 if it is digit
 * Return: otherwise return 0;
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
