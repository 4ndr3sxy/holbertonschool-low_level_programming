#include "holberton.h"

/**
 * print_square - print square with character '#' n times
 * @s: count to n times print
 * Return: without return
 */
void print_square(int s)
{
	int m = 0;
	int l = 0;

	while (m < s)
	{
		while (l < s)
		{
			_putchar('#');
			l++;
		}
		_putchar('\n');
		l = 0;
		m++;
	}
	if (s <= 0)
		_putchar('\n');
}
