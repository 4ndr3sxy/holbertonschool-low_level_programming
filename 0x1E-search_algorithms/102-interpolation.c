#include "search_algos.h"

/**
 * recursion - rwcursion to algorithm interpolation
 * @array: array with values
 * @low: init index
 * @high: End index
 * @value: value to search in array
 * Return: index of search or -1
 */
int recursion(int *array, int low, int high, int value)
{
	size_t pos = (low + (((double)(high - low) / (array[high] - array[low]))
						* (value - array[low])));
	printf("Value checked array[%ld]", pos);
	if ((int)pos > high)
	{
		printf(" is out of range\n");
		return (-1);
	}
	printf(" = [%d]\n", array[pos]);
	if (array[pos] == value)
	{
		return (pos);
	}
	else if (value < array[pos])
	{
		return (recursion(array, low, pos - 1, value));
	}
	else if (value > array[pos])
	{
		return (recursion(array, pos + 1, high, value));
	}
	return (-1);
}

/**
 * interpolation_search - Search algorithm Binary
 * @array: array with values
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	return (recursion(array, 0, size - 1, value));
}
