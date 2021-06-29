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
	int count = 0;
	int nine = 0;

	while (*s != '\0')
	{
		if (*s == '-' && (s[count + 1] >= '0' && s[count + 1] <= '9'))
		{
			tmpVal = 1;
		}
		if (*s >= '0' && *s <= '9')
		{
			if (*s == '9')
			{
				nine++;
				if (nine == 2)
				{
					return (tmpVal == 1 ? val * -1 : val);
				}
			}
			char i1 = (int)*s;
			int i2 = i1 - '0';

			val = (val * increm) + i2;
		}
		count++;
		s++;
	}
	return (tmpVal == 1 ? val * -1 : val);
}
