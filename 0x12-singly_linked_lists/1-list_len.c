#include "lists.h"

/**
 * list_len - count the number of elements in linked list.
 * @h: const with header of linked list.
 * Return: The elements of const.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
