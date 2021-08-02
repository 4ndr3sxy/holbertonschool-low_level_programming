#include "lists.h"

/**
 * sum_listint - sum data of n in nodes
 * @head: pointer to init of nodes
 * Return: Sum of values of the linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sumValueNode = 0;

	while (temp)
	{
		sumValueNode += temp->n;
		temp = temp->next;
	}
	return (sumValueNode);
}
