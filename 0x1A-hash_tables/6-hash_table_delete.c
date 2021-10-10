#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: without return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *currentNode = NULL, *nextNode = NULL;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			currentNode = ht->array[i];
			while (currentNode)
			{
				nextNode = currentNode->next;
				free(currentNode->key);
				free(currentNode->value);
				free(currentNode);
				currentNode = nextNode;
			}
		}
	}
	free(ht->array);
	free(ht);
}
