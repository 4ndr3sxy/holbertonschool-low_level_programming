#include "holberton.h"

/**
 * reverse_array - re order array.
 * @a: array of integers
 * @n: the number of elements to swap
 * Return: Without return.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int b[20];

	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		a[j] = b[i];
		j++;
	}
}
