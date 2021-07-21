#include "function_pointers.h"

/**
 * array_iterator - print positions of array using function pointer.
 * @array: array with values to print.
 * @size: size of array.
 * @action: function pointer to function that printer.
 * Return: Whitout return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
