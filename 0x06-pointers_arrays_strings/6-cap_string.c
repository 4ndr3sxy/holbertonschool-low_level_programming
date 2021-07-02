#include "holberton.h"

/**
 * cap_string - converto letter lowercase in uppercase to beggining of word
 * @cc: Chain of characters to convert in Uppercase
 * Return: point modified.
 */
char *cap_string(char *cc)
{
	int sizeC = 0;
	int i;

	while (cc[sizeC])
	{
		sizeC++;
	}

	for (i = 0; i < sizeC; i++)
	{
		if (i != 0)
		{
			if (*(cc + i) >= 97 && *(cc + i) <= 122)
			{
				if (*(cc + (i - 1)) == ' ' || *(cc + (i - 1)) == '.' ||
				*(cc + (i - 1)) == '\t' || *(cc + (i - 1)) == '\n' ||
				*(cc + (i - 1)) == ',' || *(cc + (i - 1)) == ';' ||
				*(cc + (i - 1)) == '!' || *(cc + (i - 1)) == '?' ||
				*(cc + (i - 1)) == '"' || *(cc + (i - 1)) == '(' ||
				*(cc + (i - 1)) == ')' || *(cc + (i - 1)) == '{' ||
				*(cc + (i - 1)) == '}')
				{
					*(cc + i) = *(cc + i) - 32;
				}
			}
		}
		else
		{
			if (*(cc + i) >= 97 && *(cc + i) <= 122)
			{
				*(cc + i) = *(cc + i) - 32;
			}
		}
	}
	return (cc);
}
