#include "function_pointers.h"

/**
 * int_index - print the position to search the match.
 * @array: array with values.
 * @size: size of array.
 * @cmp: function pointer.
 * Return: position of the array with match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, increment = 0;

	if (!array || !cmp)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (increment);
		}
		increment++;
	}
	return (0);
}
