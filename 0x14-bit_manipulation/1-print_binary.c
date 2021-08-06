#include "main.h"

/**
 * print_binary - print a integer in binary
 * @n: of number to print in binary
 * Return: Without return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
