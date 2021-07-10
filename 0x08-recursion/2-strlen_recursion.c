#include "holberton.h"

/**
 * _strlen_recursion - print number of characters of char * with recursive
 * @s: chain of characters to print
 * Return: number of characters.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
