#include "holberton.h"

/**
 * print_numbers - print numbert from 0 a 9
 * Return: without return
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		_putchar(ch);
	putchar('\n');
}
