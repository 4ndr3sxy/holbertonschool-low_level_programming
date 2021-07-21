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
	int i;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
