#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse with recursivity
 * @s: chain of characters to print
 * Return: Without return
 */
void _print_rev_recursion(char *s)
{
	s++;
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s);
		putchar(*s);
	}
	s--;
	if (*s == '\n')
	{
		putchar('\n');
	}
}
