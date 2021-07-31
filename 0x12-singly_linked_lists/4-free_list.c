#include "lists.h"

/**
 * free_list - free mallocs
 * @head: const with header of linked list.
 * Return: Without Return.
 */
void free_list(list_t *head)
{
	list_t *temp, *temp2;

	temp2 = head;
	while (temp2)
	{
		temp = temp2->next;
		free(temp2->str);
		free(temp2);
		temp = temp2;
	}
}
