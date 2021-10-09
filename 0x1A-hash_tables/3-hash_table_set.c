#include "hash_tables.h"

/**
 * hash_table_set - Set node to hash table
 * @ht: hash table
 * @key: key to new node in hash table
 * @value: value to save with the key in the new node
 * Return: 0 if fail or 1 if is success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int valKey = 0;
	hash_node_t *newNode = NULL;
	hash_node_t *temp = NULL;
	int val = 0;

	if (!key || !value)
		return (0);
	valKey = key_index((unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = (char *)key;
	newNode->value = (char *)value;
	newNode->next = NULL;
	if (!ht->array[valKey])
	{
		ht->array[valKey] = newNode;
		return (1);
	}
	temp = ht->array[valKey];
	while (temp->next)
	{
		if (temp->key == (char *)key)
		{
			temp->value = (char *)value;
			free(newNode);
			val = 1;
			break;
		}
		temp = temp->next;
	}
	if (val == 0)
	{
		temp->next = newNode;
	}
	return (1);
}
