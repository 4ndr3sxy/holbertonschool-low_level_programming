#include "lists.h"

/**
 * add_nodeint_end - Create new node of struct listint_s in the end.
 * @head: double pointer
 * @n: Integer a save in new node
 * Return: Pointer a new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		lastNode = *head;

		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
