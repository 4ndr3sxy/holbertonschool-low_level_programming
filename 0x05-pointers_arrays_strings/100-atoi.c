#include "holberton.h"

/**
 * _atoi - Show numbers in array of characters
 * @s: character to validate
 * Return: Return character convert in int
 */
int _atoi(char *s)
{
	unsigned int val = 0;
	int tmpVal = 0;
	int increm = 10;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			tmpVal = 1;
		}
		if (*s >= '0' && *s <= '9')
		{
			s[5];
			char i1 = (int) *s;
			int i2 = i1 - '0';

			val = (val * increm) + i2;
		}
		s++;
	}
	return (tmpVal == 1 ? val * -1 : val);
}
