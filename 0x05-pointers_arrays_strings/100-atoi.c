#include "holberton.h"

/**
 * _atoi - Show numbers in array of characters
 * @s: character to validate
 * Return: Return character convert in int
 */
int _atoi(char *s)
{
	unsigned int val = 0;
	int tmpVal = 1;
	int increm = 10;
	int count = 0;

	while (*s != '\0')
	{
		if (s[count] == '-')
		{
			tmpVal *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			char i1 = (int)*s;
			int i2 = i1 - '0';

			val = (val * increm) + i2;
		}
		else if (val > 0)
		{
			break;
		}
		count++;
		s++;
	}
	return (tmpVal < 0 ? val * -1 : val);
}
