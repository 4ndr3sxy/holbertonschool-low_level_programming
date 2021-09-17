#include "lists.h"

/**
 * add_dnodeint - Create new node of struct dlistint_t.
 * @head: double pointer
 * @n: number a save in new node.
 * Return: Pointer a new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (!(*head))
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
