#include "main.h"

/**
 * set_bit - set bit 1 in position index
 * @n: Number to change
 * @index: position to change with 1
 * Return: Return 1 if is success or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
