#include <stdio.h>

/**
 * print_diagsums - sum of values in diagonals
 * @a: array 2D
 * @size: size of array square
 * Return: return 0 to success
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum2 = 0;
	int tmp = 0;
	int tmp2 = size - 1;
	int numMax = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (numMax < size)
		{
			if (i == tmp)
			{
				sum += a[i];
				tmp = size + i + 1;
			}
		}
	}

	for (i = 0; i < (size * size); i++)
	{
		if (numMax < size)
		{
			if (i == tmp2)
			{
				sum2 += a[i];
				tmp2 = size + i - 1;
				numMax++;
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
