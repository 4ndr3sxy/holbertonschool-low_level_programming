#include "holberton.h"

/**
 * _strspn - search coincidences in chain of char *s
 * @s: chain of characters (buffer)
 * @accept: chars to compare
 * Return: numbers of coincidences
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0, val = 0;
	unsigned int count = 0;

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
				count++;
				break;
			}
			else
			{
				if (j + 1 == k)
				{
					val = 1;
					break;
				}
			}
		}
		if (val)
			break;
	}

	return (count);
}
