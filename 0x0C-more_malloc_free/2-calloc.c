#include "holberton.h"

/**
 * _calloc - prints buffer in hexa
 * @nmemb: size respect to type aditional
 * @size: the size of type of date
 * Return: pointer to new size memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *newSizeMemory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newSizeMemory = malloc(nmemb * size);
	if (newSizeMemory == NULL)
		return (NULL);

	for (i = 0; i < nmemb - 1; i++)
	{
		newSizeMemory[i] = 0;
	}
	newSizeMemory[i] = '\0';
	return (newSizeMemory);
}
