#include "holberton.h"

/**
 * _strstr - search coincidences in chain of char *s and return this
 * @haystack: chain of characters (buffer)
 * @needle: chars to compare
 * Return: chain of characters found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, l;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (l = 0; needle[l] != '\0'; l++)
		{
			if (haystack[i + l] != needle[l])
			{
				break;
			}
		}
		if (needle[l] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
