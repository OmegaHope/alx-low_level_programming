#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: a string tobe scanned
 * @c: the caharacter tobe searched
 *
 * Return: always return character type.
 */

char *_strchr(char *s, char c)
{
	char *loc;

	loc = strchr(s, c);

	return (loc);
}
