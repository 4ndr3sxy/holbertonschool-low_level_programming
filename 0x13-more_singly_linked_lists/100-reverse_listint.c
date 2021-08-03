#include "lists.h"

/**
 * reverse - Reverse a linked list
 * @head: Double pointer to head of linked list
 * Return: New head of linked list
 */
listint_t *reverse(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}

/**
 * reverse_listint - Call the function reverse()
 * @head: Double pointer to head of linked list
 * Return: New head of linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	*head = reverse(&temp);
	return (*head);
}
