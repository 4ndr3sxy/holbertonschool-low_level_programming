#include "holberton.h"

/**
 * _strchr - show coincidences
 * @s: chain of characters (buffer)
 * @c: char to search
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	int i, count = 0, val = 0;
	char *result;

	while (s[count])
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if (s[i] == c)
		{
			result = s + i;
			val = 1;
			break;
		}
		if (val)
			break;
	}
	if (!val)
		return (NULL);
	return (result);
}
