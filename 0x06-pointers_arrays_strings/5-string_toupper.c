#include "holberton.h"

/**
 * string_toupper - converto letter lowercase in uppercase
 * @cc: Chain of characters to convert in Uppercase
 * Return: point modified.
 */
char *string_toupper(char *cc)
{
	int sizeC = 0;
	int i;

	while (cc[sizeC])
	{
		sizeC++;
	}

	for (i = 0; i < sizeC; i++)
	{
		if (cc[i] >= 97 && cc[i] <= 122)
		{
			cc[i] = cc[i] - 32;
		}
	}
	return (cc);
}
