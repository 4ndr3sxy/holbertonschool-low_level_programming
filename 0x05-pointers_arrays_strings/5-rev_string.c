#include "holberton.h"

/**
 * rev_string - Initial function
 * @s: char[] to know the size and print int rever
 * Return: return 0 to success
 */
void rev_string(char *s)
{
	int l, c;
	char *e, s1;

	l = strlen(s);
	e = s + l - 1;

	for (c = 0; c < l / 2; c++)
	{
		s1 = *s;
		*s = *e;
		*e = s1;
		s++;
		e--;
	}
}
