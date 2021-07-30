#include "lists.h"

/**
 * free_list - free mallocs
 * @head: const with header of linked list.
 * Return: Without Return.
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
