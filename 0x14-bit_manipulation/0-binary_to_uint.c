#include "main.h"

/**
 * binary_to_uint - convert binary in int
 * @b: chain of char of binary
 * Return: The number binary in integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, val = 0, log = 0;
	unsigned int valueInt = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1' || val)
		{
			if (val)
				log *= 2;
			else
				log = 1;
			val = 1;
		}
		i++;
	}
	i = 0;
	val = 0;
	while (b[i])
	{
		if (b[i] == '1' || val)
		{
			if (b[i] == '1')
				valueInt += log;
			log /= 2;
			val = 1;
		}
		i++;
	}
	return (valueInt);
}
