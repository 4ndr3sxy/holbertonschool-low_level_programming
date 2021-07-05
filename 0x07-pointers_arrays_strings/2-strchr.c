#include "holberton.h"

/**
 * _strchr - show coincidences
 * @s: chain of characters (buffer)
 * @c: char to search
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
