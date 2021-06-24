#include "holberton.h"

/**
 * print_number - called to main()
 * @n: number to convert
 * Return: withour return
 */
void print_number(int n)
{
	int arr[sizeof(int) * 16];
	int i = 0;
	int j, r;

	if (n > 0)
	{
		while (n != 0)
		{
			r = n % 10;
			arr[i] = r;
			i++;
			n = n / 10;
		}
		for (j = i - 1; j > -1; j--)
		{
			_putchar(arr[j] + '0');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		n *= -1;
		_putchar('-');
		while (n != 0)
		{
			r = n % 10;
			arr[i] = r;
			i++;
			n = n / 10;
		}
		for (j = i - 1; j > -1; j--)
		{
			_putchar(arr[j] + '0');
		}
	}
}
