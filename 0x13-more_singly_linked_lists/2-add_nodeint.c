#include "lists.h"

/**
 * add_nodeint - Create new node of struct list_s.
 * @head: double pointer
 * @n: Integer to save in new node
 * Return: Pointer a new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
