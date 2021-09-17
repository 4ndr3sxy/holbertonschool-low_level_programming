#include "lists.h"

/**
 * print_dlistint - print nodes of doubly linked list.
 * @h: const with header of doubly linked list.
 * Return: The acount elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *copyHead = h;
	size_t count = 0;

	while (copyHead)
	{
		printf("%d\n", copyHead->n);
		copyHead = copyHead->next;
		count++;
	}
	return (count);
}
