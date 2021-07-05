#include "holberton.h"

/**
 * _strstr - search coincidences in chain of char *s and return this
 * @haystack: chain of characters (buffer)
 * @needle: chars to compare
 * Return: chain of characters found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, l, val = 0;


	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (l = 0; needle[l] != '\0'; l++)
			{
				if (haystack[i + l] != needle[l])
				{
					val = 1;
				}
			}
			if (!val)
			{
				return (haystack + i);
			}
		}
		val = 0;
		i++;
	}
	return ('\0');
}

int main(void)
{
    char *s = "hello,we world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
