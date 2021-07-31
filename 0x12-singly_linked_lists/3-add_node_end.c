#include "lists.h"

/**
 * add_node_end - Create new node of struct list_s in the end.
 * @head: double pointer
 * @str: Chain of characters a save in new node.
 * Return: Pointer a new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
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
