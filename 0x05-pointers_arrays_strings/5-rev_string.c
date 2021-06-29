#include "holberton.h"

/**
 * rev_string - Initial function
 * @s: char[] to know the size and print int rever
 * Return: return 0 to success
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	char *m = s;
	char *n;

	while (*m != 0)
	{
		count++;
		m++;
	}
	int j = 0;
	for (i = count - 1; i >= 0; i--)
	{
		n[j] = s[i];
		j++;
	}
	j = 0;
	while (*s != '\0')
	{
		*s = n[j];
		j++;
		s++;
	}
}
