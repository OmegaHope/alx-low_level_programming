#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a parameter variable with the copied value of array
 * @b: a byte to be replaced in the memory
 * @n: a parameter with the number of bytes to be filled
 *
 * Return: always return char type variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
