#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: a memory area on which from source copied to
 * @src: a memory area from which copied to dest
 * @n: the number bytes to be copied
 *
 * Return: always return destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
