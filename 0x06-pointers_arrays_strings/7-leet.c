#include "holberton.h"

/**
 * leet - change some letters to numbers
 * @cc: Chain of characters to validate
 * Return: chain characters modified.
 */
char *leet(char *cc)
{
	int i, j;

	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; cc[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (cc[i] == letter[j])
			{
				cc[i] = number[j];
				break;
			}
		}
	}
	return (cc);
}
