#include "lists.h"
#include <unistd.h>

/**
 * delete_dnodeint_at_index - insert new node with
 * information in position 'index'
 * @head: pointer the init of doubly linked list
 * @index: Position get
 * Return: new node inserted
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copyNode = NULL, *temp = NULL;
	unsigned int countIndex = 0;

	if (*head == NULL)
		return (-1);
	copyNode = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = copyNode->next,	(*head)->prev = NULL, free(copyNode);
		}
		else
		{
			(*head) = NULL;
			free(copyNode);
		}
		return (1);
	}
	while (copyNode->next)
	{
		if (countIndex + 1 == index)
		{
			if (copyNode->next->next)
			{
				temp = copyNode->next, copyNode->next = copyNode->next->next;
				free(temp), temp = copyNode->next->next;
				temp->prev = copyNode;
				return (1);
			}
			else
			{
				temp = copyNode->next, free(temp);
				copyNode->next = NULL;
				return (1);
			}
		}
		countIndex++, copyNode = copyNode->next;
	}
	return (-1);
}
