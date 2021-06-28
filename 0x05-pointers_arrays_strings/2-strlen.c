#include "holberton.h"

/**
 * _strlen - Initial function
 * @s: char to travel
 * Return: return amount the letters of char
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
