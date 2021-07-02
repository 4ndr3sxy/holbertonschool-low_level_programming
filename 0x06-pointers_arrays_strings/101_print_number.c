#include "holberton.h"

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
			_putchar('-');
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

				_putchar(val + '0');
			}
			else
			{
				_putchar(arr[j] + '0');
			}
		}
	}
	else
	{
		_putchar('0');
	}
}
