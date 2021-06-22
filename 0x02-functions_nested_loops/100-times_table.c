#include "holberton.h"

/**
 * split_3_digits - called by print_times_table()
 * Description: print number of three digits
 * @p1: digit initial
 * @p2: digit end
 * @tmp: number complete (3 digits)
 * Return: without return function(void)
 */
void split_3_digits(int p1, int p2, int tmp)
{
	p1 = tmp / 100;
	int p3;

	p3 = (tmp / 10) % 10;
	_putchar(p1 + '0');
	_putchar(p3 + '0');
	_putchar(p2 + '0');
}

/**
 * validate_ends - called by print_times_table()
 * Description: validation of conditionals adittions
 * @i:value of 'for'
 * @j:value of 'for'
 * @n:value of numers to print tables
 * Return: without return function(void)
 */
void validate_ends(int i, int j, int n)
{
	if (j != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	if ((i * (j + 1)) < 100)
		_putchar(' ');

	if (i == 0 && j != n)
		_putchar(' ');
}

/**
 * print_times_table - called by main()
 * Description: print tables between 0 and 9
 * @n: number of tables to print
 * Return: without return function(void)
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int tmp = i * j;
				int p1 = tmp / 10, p2 = tmp % 10;

				if (tmp != 0)
				{
					if (tmp > 9 && tmp < 100)
					{
						_putchar(p1 + '0');
						_putchar(p2 + '0');
					}
					else
					{
					if (tmp > 99)
					{
						split_3_digits(p1, p2, tmp);
					}
					else
					{
						_putchar(' ');
						_putchar(tmp + '0');
					}
					}
				}
				else
				{
					_putchar(tmp + '0');
				}
				validate_ends(i, j, n);
			}
			_putchar('\n');
		}
	}
}
