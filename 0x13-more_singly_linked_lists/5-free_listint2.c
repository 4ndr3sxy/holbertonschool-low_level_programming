#include "lists.h"

/**
 * free_listint2 - free mallocs of double pointer
 * @head: double pointer a addres of init of the head.
 * Return: Without Return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp2;

	temp2 = *head;
	while (temp2)
	{
		*head = temp2->next;
		free(temp2);
		temp2 = *head;
	}
}
