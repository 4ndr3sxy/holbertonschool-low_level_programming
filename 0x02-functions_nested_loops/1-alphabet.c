#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - called in main()
 * Description: show/print alphabet from a function
 * Return: return 0 to success
 */
int print_alphabet(void)
{
	char ch = 97;

	for (ch = 97; ch < 123; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}

/**
 * main - Initial function
 * Description: show/print alphabet from a function
 * Return: return 0 to success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
