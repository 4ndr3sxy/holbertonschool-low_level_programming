#include "holberton.h"

/**
 * print_diagonal - print diagonal with character '\' n times
 * @n: print n times a character
 * Return: without return
 */
void print_diagonal(int n)
{
	int m = 0;
	int l = 0;

	while (m < n)
	{
		while (l < m)
		{
			_putchar(' ');
			l++;
		}
		_putchar('\\');
		_putchar('\n');
		l = 0;
		m++;
	}
}
