#include "holberton.h"

/**
 * prime_factor - Initial function
 * @num: number to validate
 * Return: without return
 */
void prime_factor(int num)
{
	int i, j;
	int prime;
	int primeLargest = 0;
	int val = 0;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			prime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					prime = 0;
					break;
				}
			}
			if (prime == 1 && val == 0)
			{
				primeLargest = i;
				val++;
			}

			if (prime == 1)
			{
				if (i > primeLargest)
				{
					primeLargest = i;
				}
			}
		}
	}
	printf("%d\n", primeLargest);
}
