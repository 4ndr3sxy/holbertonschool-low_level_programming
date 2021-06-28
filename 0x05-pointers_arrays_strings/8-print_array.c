#include "holberton.h"

/**
 * print_array - print n positions of array
 * @a: array
 * @n: amount of positions to print
 * Return: wirhout return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
