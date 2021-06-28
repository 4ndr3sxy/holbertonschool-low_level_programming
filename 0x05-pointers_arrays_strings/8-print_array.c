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
		putchar('\n');
	}
}

int main(void)
{
	int array[5] = {
		-198, 298, 402, -1024, 98
	};

	print_array(array, 5);
	return (0);
}
