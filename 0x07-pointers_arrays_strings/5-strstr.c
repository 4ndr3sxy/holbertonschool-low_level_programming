#include "holberton.h"

/**
 * _strstr - search coincidences in chain of char *s and return this
 * @haystack: chain of characters (buffer)
 * @needle: chars to compare
 * Return: chain of characters found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, k = 0, l, val = 0;

	while (needle[k])
	{
		k++;
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			for (l = 0; l < k; l++)
			{
				if (haystack[i + l] != needle[l])
				{
					val = 1;
				}
			}
			if (!val)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return ('\0');
}
