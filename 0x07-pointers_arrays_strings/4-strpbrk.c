#include "holberton.h"

/**
 * _strpbrk - search coincidences in chain of char *s and return this
 * @s: chain of characters (buffer)
 * @accept: chars to compare
 * Return: chain of characters found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k = 0, val = 0;
	char *s1;

	while (accept[k])
	{
		k++;
	}

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (s[i] == accept[j])
			{
				s1 = s + i;
				val = 1;
				break;
			}
		}
		if (val)
			break;
	}

	return (s1);
}
