#include "main.h"
/**
 * strncpy - copy a string from the source to destination
 * @*dest: a pointer variable for the destination string
 * @*src: apointer variable for the source string
 * @n: an integer variable for the number or size of string to be copied
 * Return: return destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
