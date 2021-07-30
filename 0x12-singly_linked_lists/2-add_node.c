#include "lists.h"

/**
 * add_node - Create new node of struct list_s.
 * @head: double pointer
 * @str: Chain of characters a save in new node.
 * Return: Pointer a new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
