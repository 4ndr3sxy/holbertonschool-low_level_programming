#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse with recursivity
 * @s: chain of characters to print
 * Return: Without return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
	}
	s--;
	s--;
	if (*s == '\0')
	{
		s++;
		putchar(*s);
	}
	else
	{
		s++;
		s++;
	}
}
