#include "main.h"

/**
 * strncat - concatenate two strings one the after another
 * @dest: a pointer variable for the destination string
 * @src: a pointer variable for the source string
 * @n: an integer variable for the number of characters to be append
 *
 * Return: return appended value
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return(dest);
}
