#include "search_algos.h"

/**
 * print_array - print array used
 * @array: array with values
 * @x: begin index of array
 * @y: end index of array
 * Return: withour return
 */
void print_array(int *array, int x, int y)
{
	printf("Searching in array: ");
	for (; x <= y; x++)
	{
		printf("%d", array[x]);
		if (x < y)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_recursion - recursion to search and get positions
 * x and y dinamycs
 * @array: array with values
 * @x: begin index of array
 * @y: end index of array
 * @value: value to search in array
 * Return: index of search or -1
 */
int binary_search_recursion(int *array, int x, int y, int value)
{
	int mid = 0;

	print_array(array, x, y);
	mid = (x + y) / 2;
	if (mid < y)
	{
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			y = --mid;
			return (binary_search_recursion(array, x, y, value));
		}
		else if (array[mid] < value)
		{
			x = ++mid;
			return (binary_search_recursion(array, x, y, value));
		}
	}
	return (-1);
}

/**
 * exponential_search - Search algorith
 *
 * @array: array with values
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1;
	int tmp = 0;

	if (array[0] == value)
		return (0);
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i >= (int)size)
		tmp = (size - 1);
	else
		tmp = i;
	printf("Value found between indexes [%d] and [%d]\n", i / 2, tmp);
	i /= 2;
	return (binary_search_recursion(array, i, tmp, value));
}
