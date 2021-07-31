#include "lists.h"

/**
 * free_list - free mallocs
 * @head: const with header of linked list.
 * Return: Without Return.
 */
void free_list(list_t *head)
{
	list_t *temp, *temp2 = head;

	while (temp2)
	{
		temp = temp2->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
