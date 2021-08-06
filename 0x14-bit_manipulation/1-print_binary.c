#include "main.h"

/**
 * print_binary - print a integer in binary
 * @n: of number to print in binary
 * Return: Without return
 */
void print_binary(unsigned long int n)
{
	unsigned long int maxValue = 1, temp;
	int count = 0;

	while (n >= maxValue)
	{
		maxValue *= 2;
		count++;
	}
	maxValue /= 2;
	if (maxValue < 2)
	{
		putchar(n + '0');
	}
	else
	{
		while (count > 0 || n != 0)
		{
			temp = maxValue;
			if (maxValue <= n)
			{
				putchar('1');
				n -= temp;
			}
			else
			{
				putchar('0');
			}
			maxValue /= 2;
			count--;
		}
	}
}
