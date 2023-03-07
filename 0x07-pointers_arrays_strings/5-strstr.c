#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: the main string to be examined.
 * @needle: the sub-string to be searched
 *
 * Return: returns a pointer points to the first character
 */

char *_strstr(char *haystack, char *needle)
{
	char *fnd;

	fnd = strstr(haystack, needle );

	return (fnd);
}
