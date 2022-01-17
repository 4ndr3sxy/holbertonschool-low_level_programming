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
 * binary_search - Search algorithm Binary
 * @array: array with values
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursion(array, 0, (int) --size, value));
}
