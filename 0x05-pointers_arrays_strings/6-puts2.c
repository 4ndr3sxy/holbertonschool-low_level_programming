#include "holberton.h"

/**
 * puts2 - print numbers mod 2 == 0
 * @str: char to validate
 * Return: without return
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != 0)
	{
		if (i % 2 == 0)
		{
			putchar(*str);
		}
		i++;
		str++;
	}
	putchar('\n');
}
