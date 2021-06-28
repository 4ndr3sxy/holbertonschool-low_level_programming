#include "holberton.h"

/**
 * puts_half - print numbers mod 2 != 0
 * @str: char to validate
 * Return: return 0 to success
 */
void puts_half(char *str)
{
	while (*str != 0)
	{
		int i = 0;

		if (i % 2 != 0)
		{
			putchar(*str);
		}
		str++;
	}
	putchar('\n');
}
