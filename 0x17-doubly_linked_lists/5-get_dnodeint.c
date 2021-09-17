#include "lists.h"

/**
 * get_dnodeint_at_index - get node with information in position 'index'
 * @head: pointer the init of doubly linked list
 * @index: Position get
 * Return: Node with information in index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int countIndex = 0;
	dlistint_t *copyHead = 0;

	if (!head)
		return (NULL);
	copyHead = head;
	while (copyHead)
	{
		if (countIndex == index)
			return (copyHead);
		copyHead = copyHead->next;
		countIndex++;
	}
	return (NULL);
}
