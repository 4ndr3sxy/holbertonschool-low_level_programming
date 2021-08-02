#include "lists.h"

/**
 * listint_len - print nodes of linked list.
 * @h: const with header of linked list.
 * Return: The elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
