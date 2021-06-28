#include <stdio.h>

/**
 * _strcpy - copy chars of *src to *dest
 * @dest:char to fill of characters
 * @src: where the characters will be taken
 * Return: return 0 to success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (i == 0)
	{
		dest[j] = *src;
		j++;
		if (*src == '\n')
			i++;
		*src++;
	}
	return (dest);
}
