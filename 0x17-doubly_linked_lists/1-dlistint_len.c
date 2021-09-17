#include "lists.h"

/**
 * dlistint_len - print acount of nodes in of doubly linked list.
 * @h: const with header of doubly linked list.
 * Return: The acount elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *copyHead = h;
	size_t count = 0;

	while (copyHead)
	{
		copyHead = copyHead->next;
		count++;
	}
	return (count);
}
