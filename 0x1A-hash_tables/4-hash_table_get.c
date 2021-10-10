#include "hash_tables.h"

/**
 * hash_table_get - get a node with key
 * @ht: hash table
 * @key: key to get a node
 * Return: Value in the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int valKey = 0;
	hash_node_t *tempArray = NULL;

	if (!ht || !key)
		return (NULL);
	valKey = key_index((const unsigned char *)key, ht->size);
	if (ht->array[valKey])
	{
		tempArray = ht->array[valKey];
		while (tempArray)
		{
			if (strcmp(tempArray->key, key) == 0)
				return (tempArray->value);
			tempArray = tempArray->next;
		}
	}
	return (NULL);
}
