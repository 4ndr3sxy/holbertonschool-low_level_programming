#include "holberton.h"

/**
 * puts2 - print numbers mod 2 == 0
 * @str: char to validate
 * Return: without return
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		if (*str % 2 == 0)
		{
			int v = *str;

			putchar(v);
		}
		str++;
	}
	putchar('\n');
}
