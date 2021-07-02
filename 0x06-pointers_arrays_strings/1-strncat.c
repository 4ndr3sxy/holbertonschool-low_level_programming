#include "holberton.h"

/**
 * _strncat - concatenates two strings with size 'n'
 * @dest: chain initial
 * @src: chain to join with *dest
 * @n: count of letter to add a *dest
 * Return: return pointer a dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int sizeDest = 0;
	int j = 0;
	char *concat = dest;

	while (dest[i] != '\0')
	{
		sizeDest++;
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[sizeDest + j] = src[j];
		j++;
	}

	return (concat);
}
