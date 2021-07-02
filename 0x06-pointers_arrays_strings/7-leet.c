#include "holberton.h"

/**
 * leet - change some letters to numbers
 * @cc: Chain of characters to validate
 * Return: chain characters modified.
 */
char *leet(char *cc)
{
	int sizeC = 0;
	int i;

	while (cc[sizeC])
	{
		sizeC++;
	}

	for (i = 0; i < sizeC; i++)
	{
		if (*(cc + i) == 65 || *(cc + i) == 97)
		{
			*(cc + i) = '4';
		}
		else if (*(cc + i) == 69 || *(cc + i) == 101)
		{
			*(cc + i) = '3';
		}
		else if (*(cc + i) == 79 || *(cc + i) == 111)
		{
			*(cc + i) = '0';
		}
		else if (*(cc + i) == 84 || *(cc + i) == 116)
		{
			*(cc + i) = '7';
		}
		else if (*(cc + i) == 76 || *(cc + i) == 108)
		{
			*(cc + i) = '1';
		}
	}
	return (cc);
}
