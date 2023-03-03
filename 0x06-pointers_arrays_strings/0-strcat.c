#include "main.h"

/**
 * _strcat - append or concatenate two strings
 * @dest: a pointer variable for the destination string
 * @src: a pointer variable for the source string
 *
 * Return: return appended string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
