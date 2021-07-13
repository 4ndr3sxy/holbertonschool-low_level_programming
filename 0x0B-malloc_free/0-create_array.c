#include "holberton.h"

/**
 * create_array - created array using malloc()
 * @c: char to save in array
 * @size: the size of the memory of array
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *stringMalloc;
	unsigned int i = 0;

	stringMalloc = malloc(sizeof(unsigned int)  * size);

	if (stringMalloc == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		stringMalloc[i] = c;
		i++;
	}
	stringMalloc[i] = '\0';
	return (stringMalloc);
}
