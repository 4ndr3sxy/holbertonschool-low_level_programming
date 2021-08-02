#include "lists.h"

/**
 * print_listint - print nodes of linked list.
 * @h: const with header of linked list.
 * Return: The elements in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
