#include "holberton.h"

/**
 * _strchr - show coincidences
 * @s: chain of characters (buffer)
 * @c: char to search
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i, count = 0;
	char *result;

	while (s[count])
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		s++;
		if (s[i] == c)
		{
			result = s;
			break;
		}
	}
	return (result);
}
