#include "holberton.h"

/**
 * puts_half - print numbers mod 2 != 0
 * @str: char to validate
 * Return: return 0 to success
 */
void puts_half(char *str)
{
	char *str1 = str;
	int i = 0;
	int count = 0;

	while (*str1 != '\0')
	{
		count++;
		str1++;
	}
	if (count % 2 == 0)
	{
		count /= 2;
	}
	else
	{
		count = (count - 1) / 2;
	}

	while (*str != '\0')
	{
		if (i >= count)
		{
			putchar(*str);
		}
		i++;
		str++;
	}
	putchar('\n');
}
