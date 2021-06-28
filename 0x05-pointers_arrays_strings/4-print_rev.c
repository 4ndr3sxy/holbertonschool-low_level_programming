#include "holberton.h"

/**
 * print_rev - Initial function
 * @s: char to print in revert
 * Return: return 0 to success
 */
void print_rev(char *s)
{
	int i;
	int count = 0;
	char *m = s;

	while (*m != 0)
	{
		count++;
		m++;
	}
	for (i = count-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
