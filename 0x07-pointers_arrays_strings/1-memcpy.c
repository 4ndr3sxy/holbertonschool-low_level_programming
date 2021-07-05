#include "holberton.h"

/**
 * _memcpy - copy values in buffer
 * @dest: chain of characters (buffer)
 * @src: chain of copy in *dest
 * @n: size to copy the buffer
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
