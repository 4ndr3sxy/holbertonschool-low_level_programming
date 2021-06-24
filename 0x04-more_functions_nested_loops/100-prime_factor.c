#include <stdio.h>

/**
 * prime_factor - Initial function
 * Return: without return
 */
void prime_factor(void)
{
	long int i, j;
	long int num = 612852475143;
	int prime;
	long int primeLargest = 0;
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
	printf("%ld\n", primeLargest);
}

/**
 * main - Initial function
 * Return: return 0 to success
 */
int main(void)
{
	prime_factor();
	return (0);
}
