#include "holberton.h"

/**
 * _strncpy - copy one string in other
 * @dest: chain initial
 * @src: chain to copy in *dest
 * @n: count of letter to add a *dest
 * Return: return pointer a dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
