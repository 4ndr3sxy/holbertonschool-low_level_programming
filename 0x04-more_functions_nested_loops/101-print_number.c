#include "holberton.h"

/**
 * print_number - called to main()
 * @n: number to convert
 * Return: withour return
 */
void print_number(int n)
{
	if (n >= 0)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else if (n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n < 1000)
		{
			_putchar(n / 100 + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n / 1000 + '0');
			_putchar(((n / 100) % 10) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar(n % 10 + '0');

		}
	}
	else
	{
		n *= -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
