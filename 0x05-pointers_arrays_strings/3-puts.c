#include "holberton.h"

/**
 * _puts - Initial function
 * @str: char to print with _putchar()
 * Return: return 0 to success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}
	_putchar('\n');
}
