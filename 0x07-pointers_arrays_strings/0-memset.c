#include "holberton.h"

/**
 * _memset - change values in buffer
 * @s: chain of characters (buffer)
 * @b: new value to chain characters
 * @n: size to change the buffer
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
