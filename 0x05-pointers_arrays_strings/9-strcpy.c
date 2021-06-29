#include "holberton.h"

/**
 * _strcpy - copy chars of *src to *dest
 * @dest:char to fill of characters
 * @src: where the characters will be taken
 * Return: return 0 to success
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';

	return (dest);
}
