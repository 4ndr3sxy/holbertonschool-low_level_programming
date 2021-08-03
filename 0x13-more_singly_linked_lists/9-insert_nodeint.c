#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in a position 'idx'
 * @head: Double pointer of initial head in linked list
 * @idx: Position to insert of new node
 * @n: Value of new node
 * Return: Pointer to address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head, *newNode, *temp2;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!temp)
	{
		newNode->next = NULL;
		temp = newNode;
		return (newNode);
	}

	for (i = 0; i < idx; i++)
	{
		if (!temp)
			break;
		if (idx == 0)
		{
			temp2 = temp;
			temp = newNode;
			newNode->next = temp2;
			return (newNode);
		}
		else if (i + 1 == idx)
		{
			temp2 = temp->next;
			temp->next = newNode;
			newNode->next = (!temp2 ? NULL : temp2);
			return (newNode);
		}
		temp = temp->next;
	}
	return (NULL);
}
