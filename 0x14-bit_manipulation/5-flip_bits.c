#include "main.h"

/**
 * flip_bits - know the diferences of bits
 * @n: number one
 * @m: number two
 * Return: Count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = (n ^ m);
	unsigned int count = 0;

	while (l > 0)
	{
		count++;
		l &= (l - 1);
	}
	return (count);
}
