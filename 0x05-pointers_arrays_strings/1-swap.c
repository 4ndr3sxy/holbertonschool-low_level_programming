#include "holberton.h"

/**
 * swap_int - Initial function
 * @a: number one
 * @b: number two
 * Return: return 0 to success
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
