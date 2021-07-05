#include "holberton.h"

/**
 * _strstr - search coincidences in chain of char *s and return this
 * @haystack: chain of characters (buffer)
 * @needle: chars to compare
 * Return: chain of characters found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k = 0, val = 0;

	while (needle[k])
	{
		k++;
	}

	while (*haystack)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < k; j++)
			{
				for (j = 0; j < k; j++)
				{
					if (haystack[i + j] != needle[j])
					{
						val = 1;
					}
				}
				if (!val)
				{
					return (haystack + i);
				}
			}
		}
		haystack++;
	}
	return ('\0');
}
