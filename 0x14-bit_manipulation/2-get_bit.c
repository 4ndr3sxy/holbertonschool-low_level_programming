#include "main.h"

/**
 * get_bit - get bit of position of index
 * @n: number to use
 * @index: position to search
 * Return: Value of the bit in position index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int resultBin = (n & (1 << index));

	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	if (resultBin)
	{
		return (1);
	}
	return (0);
}
