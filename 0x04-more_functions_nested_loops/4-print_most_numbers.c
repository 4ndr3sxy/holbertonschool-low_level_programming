#include "holberton.h"

/**
 * print_most_numbers - print numbert from 0 a 9 without 2 and 4
 * Return: without return
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	putchar('\n');
}
