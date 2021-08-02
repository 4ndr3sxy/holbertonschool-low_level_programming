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

	for (i = 0; i < idx; i++)
	{
		if (!temp)
			break;
		if (i + 1 == idx)
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (NULL);
			temp2 = temp->next;
			temp->next = newNode;
			newNode->n = n;
			newNode->next = (!temp2 ? NULL : temp2);
			return (newNode);
		}
		temp = temp->next;
	}
	return (NULL);
}
