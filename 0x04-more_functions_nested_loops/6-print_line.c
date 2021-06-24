#include "holberton.h"

/**
 * print_line - print character '_' n times
 * @n: n times a print character
 * Return: return 0 to success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
