#include "search_algos.h"
#include <math.h>

/**
 * print_array_recursion - Print value in index and search equallest
 * respect low and value on array
 *
 * @array: array with values
 * @low: init index
 * @high: End index
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
int print_array_recursion(int *array, int low, int high, int value, int size)
{
	if (low <= high && low < size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
		{
			return (low);
		}
		else
		{
			++low;
			return (print_array_recursion(array, low, high, value, size));
		}
	}
	return (-1);
}

/**
 * search_index_recursion - jump sqrt(size) to know segment of position value
 * @array: array with values
 * @size: size of array with values
 * @index: position to jump respect sqrt(size)
 * @value: value to search in array
 * Return: index of search or -1
 */
int search_index_recursion(int *array, size_t size, int index, int value)
{
	if (index < (int)size)
	{
		if (array[index] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				   index - (int)sqrt(size), index);
			return (index);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			index += sqrt(size);
			return (search_index_recursion(array, size, index, value));
		}
	}
	printf("Value found between indexes [%d] and [%d]\n",
		   index - (int)sqrt(size), index);
	return (index);
}

/**
 * jump_search - Search algorithm
 * @array: array with values
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int low = 0, high = 0;

	high = search_index_recursion(array, size, 0, value);
	low = high - (sqrt(size) - 1);
	return (print_array_recursion(array, low, high, value, size));
}
