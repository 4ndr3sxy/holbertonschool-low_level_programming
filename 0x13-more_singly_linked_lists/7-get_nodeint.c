#include "lists.h"

/**
 * get_nodeint_at_index - get node with information in position 'index'
 * @head: pointer the init of linked list
 * @index: Position get
 * Return: Node with information in index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (i = 0; i <= index; i++)
	{
		if (!temp)
			break;
		if (i == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
