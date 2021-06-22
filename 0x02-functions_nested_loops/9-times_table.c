#include "holberton.h"

/**
 * times_table - called by main()
 * Description: print tables between 0 and 9
 * Return: without return function(void)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int tmp = i * j;
			int p1, p2;

			if (tmp != 0)
			{
				if (tmp > 9)
				{
					p1 = tmp / 10;
					p2 = tmp % 10;
					_putchar(p1 + '0');
					_putchar(p2 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(tmp + '0');
				}
			}
			else
			{
				_putchar(tmp + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i == 0 && j != 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
