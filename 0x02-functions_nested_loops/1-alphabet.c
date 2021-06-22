#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - called in main()
 * Description: show/print alphabet from a function
 * Return: return 0 to success
 */
void print_alphabet(void)
{
	char ch = 97;

	for (ch = 97; ch < 123; ch++)
		_putchar(ch);
	_putchar('\n');
}
