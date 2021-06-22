#include "holberton.h"

/**
 * print_last_digit - called by main()
 * Description: Convert absolute value to any number
 * @n: number to validate
 * Return: return 0 to success
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
