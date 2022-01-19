#include "search_algos.h"
#include <math.h>

#include <unistd.h>

/**
 * print_list_recursion - Print value in index and search equallest
 * respect low and value on array
 *
 * @low: init index node
 * @high: End index node
 * @size: size of list with values
 * @value: value to search in list
 * Return: index of search or -1
 */
listint_t *print_list_recursion(listint_t *low, size_t high,
								int value, int size)
{
	if (low && low->index <= high && low->index < (size_t)size)
	{
		printf("Value checked array[%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
		{
			return (low);
		}
		else
		{
			low = low->next;
			return (print_list_recursion(low, high, value, size));
		}
	}
	return (NULL);
}

/**
 * search_list_recursion - jump sqrt(size) to know segment of position value
 * @nodeHigh: Node with max high index possible
 * @size: size of array with values
 * @value: value to search in array
 * Return: index of search or -1
 */
listint_t *search_list_recursion(listint_t *nodeHigh, size_t size, int value)
{
	int sqrtValue = 0, tmp = 0;
	listint_t *tmpNodePrev = NULL;

	sqrtValue = (int)sqrt(size);
	if (nodeHigh && nodeHigh->index < size)
	{
		if (nodeHigh->n > value)
		{
			printf("Value checked array[%ld] = [%d]\n", nodeHigh->index,
				   nodeHigh->n);
			printf("Value found between indexes [%ld] and [%ld]\n",
				   nodeHigh->index - sqrtValue, nodeHigh->index);
			return (nodeHigh);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", nodeHigh->index, nodeHigh->n);
			while (sqrtValue > tmp)
			{
				if (!nodeHigh->next)
				{
					printf("Value checked array[%ld] = [%d]\n", nodeHigh->index, nodeHigh->n);
					printf("Value found between indexes [%ld] and [%ld]\n",
						   nodeHigh->index - (sqrtValue - 1), nodeHigh->index);
					return (nodeHigh);
				}
				nodeHigh = nodeHigh->next;
				tmp++;
			}
			return (search_list_recursion(nodeHigh, size, value));
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		   tmpNodePrev->index - sqrtValue, tmpNodePrev->index);
	return (nodeHigh);
}

/**
 * jump_list - Search algorithm jump with linked list
 * @list: list with values
 * @size: size of list with values
 * @value: value to search in array
 * Return: index of search or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int low = 0;
	listint_t *temp = NULL;
	listint_t *nodeHigh = NULL;
	listint_t *nodeLow = NULL;

	temp = list;
	nodeLow = list;
	low = sqrt(size);
	while (low != 0)
	{
		temp = temp->next;
		low--;
	}
	nodeHigh = search_list_recursion(temp, size, value);

	if (!nodeHigh)
		return (NULL);
	low = nodeHigh->index - (sqrt(size));

	while (low != 0)
	{
		nodeLow = nodeLow->next;
		low--;
	}
	return (print_list_recursion(nodeLow, nodeHigh->index, value, size));
}
