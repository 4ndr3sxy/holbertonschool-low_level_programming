#include "lists.h"

/**
 * sum_dlistint - Sum all value save in each node
 * @head: const with header of linked list.
 *Return: sum of number in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copyHead;
	int sum = 0;

	if (!head)
		return (sum);
	copyHead = head;
	while (copyHead)
	{
		sum += copyHead->n;
		copyHead = copyHead->next;
	}
	return (sum);
}
