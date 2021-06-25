#include "holberton.h"
#include <limits.h>

/**
 * print_number - called to main()
 * @n: number to convert
 * Return: withour return
 */
void print_number(int n)
{
	int n1 = n;
	int arr[sizeof(int) * 8];
	int i = 0;
	int j, r;

	if (n != 0)
	{
		if (n < 0)
		{
			n *= -1;
			putchar('-');
		}
		while (n != 0)
		{
			r = n % 10;
			arr[i] = r;
			i++;
			n = n / 10;
		}
		for (j = i - 1; j > -1; j--)
		{
			if (n1 < -2147483647)
			{
				int val = arr[j] * -1;

				putchar(val + '0');
			}
			else
			{
				putchar(arr[j] + '0');
			}
		}
	}
	else
	{
		putchar('0');
	}
}
