#include "holberton.h"

/**
 * _strstr - search coincidences in chain of char *s and return this
 * @haystack: chain of characters (buffer)
 * @needle: chars to compare
 * Return: chain of characters found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, l;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (l = 0; needle[l] != '\0'; l++)
			{
				if (haystack[i + l] != needle[l])
				{
					break;
				}
				if (needle[l + 1] == '\0')
				{
					return (haystack + i);
				}
			}
		}
		i++;
	}
	return ('\0');
}
