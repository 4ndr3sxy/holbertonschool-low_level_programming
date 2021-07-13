#include "holberton.h"

/**
 * str_concat - created new array using malloc()
 * @s1: chain of chars one
 * @s2: chain of chars two
 * Return: new pointer with s1 and s2 added.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *stringMalloc;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	i += j;
	stringMalloc = malloc(sizeof(char) * i);
	if (stringMalloc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		stringMalloc[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		stringMalloc[i] = s2[j];
		i++;
		j++;
	}
	stringMalloc[i] = '\0';
	return (stringMalloc);
}
