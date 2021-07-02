#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: chain initial
 * @s2: chain to comparete with *s1
 * Return: return pointer a s1
 */
int _strcmp(char *s1, char *s2)
{
	int val1 = 0, val2 = 0;
	int i = 0, result;
	int temp = 0;

	do
	{
		val1 += s1[i];
		val2 += s2[i];
		i++;
		temp++;
	} while (s1[i] == s2[i] && (s1[i] || s2[i]));

	result = val1 - val2;

	return (result);
}
