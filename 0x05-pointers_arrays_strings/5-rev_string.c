#include "holberton.h"

/**
 * rev_string - Initial function
 * @s: char[] to know the size and print int rever
 * Return: return 0 to success
 */
void rev_string(char *s)
{
	int i;
	int sizeChar = sizeof(s);

	for (i = sizeChar - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
