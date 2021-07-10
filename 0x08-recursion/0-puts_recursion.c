#include "holberton.h"

/**
 * _puts_recursion - print a string with recursivity
 * @string: chain of characters to print
 * Return: Always 0.
 */
void _puts_recursion(char *string)
{
	if (*string != '\0')
	{
		char letterString = *string;

		_putchar(letterString);
		string++;
		_puts_recursion(string);
	}
	else
	{
		_putchar('\n');
	}
}
