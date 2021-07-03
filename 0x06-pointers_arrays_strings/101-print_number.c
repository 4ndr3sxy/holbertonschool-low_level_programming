#include "holberton.h"

/**
 * print_number - called to main()
 * @n: number to convert
 * Return: withour return
 */
void print_number(int n)
{
	int i, j;
	int cpN = n;
	int numberDigits = 0;
	int cpNumberDigits;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	do {
		numberDigits++;
		cpN /= 10;
	} while (cpN != 0);
	cpNumberDigits = numberDigits;

	for (i = 0; i < cpNumberDigits; i++)
	{
		cpN = n;
		for (j = 0; j < cpNumberDigits; j++)
		{
			if (j + 1 < numberDigits)
			{
				cpN /= 10;
			}
			else
			{
				cpN %= 10;
			}
		}
		if (n < -2147483647)
			_putchar(cpN * -1 + '0');
		else
			_putchar(cpN + '0');
		numberDigits--;
	}
}
