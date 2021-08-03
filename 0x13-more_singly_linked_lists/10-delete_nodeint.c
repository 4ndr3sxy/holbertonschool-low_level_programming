#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node with index
 * @head: double pointer
 * @index: Position of node to delete
 * Return: 1 if finish success, -1 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cpHead = *head, *deleteNode, *nextNode;

	for (i = 0; i <= index; i++)
	{
		if (!cpHead)
			break;
		if (index == 0)
		{
			deleteNode = cpHead;
			nextNode = deleteNode->next;
			*head = nextNode;
			free(deleteNode);
			return (1);
		}
		else if (i + 1 == index)
		{
			deleteNode = cpHead->next;
			nextNode = deleteNode->next;
			cpHead->next = nextNode;
			free(deleteNode);
			return (1);
		}
		cpHead = cpHead->next;
	}
	return (-1);
}
