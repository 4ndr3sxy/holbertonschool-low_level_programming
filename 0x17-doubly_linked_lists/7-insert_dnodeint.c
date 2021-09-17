#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node with
 * information in position 'idx'
 * @h: pointer the init of doubly linked list
 * @idx: Position get
 * @n: value of new node
 * Return: new node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int countIndex = 0;
	dlistint_t *copyNode = NULL, *newNode = NULL, *copyCopyNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->next = NULL, newNode->prev = NULL, newNode->n = n;
	if (!*h)
	{
		*h = newNode;
		return (newNode);
	}
	copyNode = *h;
	copyCopyNode = copyNode;
	if (idx == 0)
	{
		newNode->next = copyNode, copyNode->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (copyNode->next)
	{
		copyCopyNode = copyNode->next;
		if (countIndex + 1 == idx)
		{
			copyNode->next = newNode, newNode->prev = copyNode;
			newNode->next = copyCopyNode, copyCopyNode->prev = newNode;
			return (newNode);
		}
		copyNode = copyNode->next;
		copyCopyNode = copyNode->next, countIndex++;
	}
	if (countIndex + 1 == idx)
	{
		copyNode->next = newNode, newNode->next = NULL;
		newNode->prev = copyNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
