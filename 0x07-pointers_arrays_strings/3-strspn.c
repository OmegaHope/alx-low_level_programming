#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the main C string to be scanned
 * @accept: the string containing the list of characters to match in str1
 *
 * Return: always return unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	int ln;

	ln = strspn(s, accept);

	return (ln);
}
