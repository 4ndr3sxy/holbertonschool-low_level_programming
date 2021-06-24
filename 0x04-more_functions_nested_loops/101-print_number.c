#include <stdio.h>

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
			putchar(n + '0');
		}
		else if (n < 100)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
		}
		else if (n < 1000)
		{
			putchar(n / 100 + '0');
			putchar(((n / 10) % 10) + '0');
			putchar(n % 10 + '0');
		}
		else
		{
			putchar(n / 1000 + '0');
			putchar(((n / 100) % 10) + '0');
			putchar(((n / 10) % 10) + '0');
			putchar(n % 10 + '0');

		}
	}
	else
	{
		n *= -1;
		putchar('-');
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	}
}
