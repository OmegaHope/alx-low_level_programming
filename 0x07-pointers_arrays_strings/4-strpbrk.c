#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: returns a pointer to the character in s.
 */

char *_strpbrk(char *s, char *accept)
{
	char *l;

	l = strpbrk(s, accept);

	return (l);
}
