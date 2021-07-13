#include "holberton.h"

/**
 * _strdup - created new array using malloc()
 * @str: chain of chars to save in new array
 * Return: pointer to new array.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *stringMalloc;

	while (str[i])
	{
		i++;
	}
	stringMalloc = malloc(sizeof(char)  * i);
	if (stringMalloc == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		stringMalloc[i] = str[i];
		i++;
	}
	stringMalloc[i] = '\0';
	return (stringMalloc);
}
