#include "lists.h"

/**
 * print_list - print nodes of linked list.
 * @h: const with header of linked list.
 * Return: The elements of const.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}

