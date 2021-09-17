#include "lists.h"

/**
 * add_dnodeint_end - Create new node of struct list_s in the end.
 * @head: double pointer
 * @n: number a save in new node.
 * Return: Pointer a new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *copyHead = NULL;

	if (!head)
		return (NULL);

	copyHead = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (!copyHead)
	{
		*head = newNode;
	}
	else
	{
		while (copyHead->next)
			copyHead = copyHead->next;
		copyHead->next = newNode;
		newNode->prev = copyHead;
	}
	return (newNode);
}
