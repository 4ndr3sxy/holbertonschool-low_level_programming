#include "hash_tables.h"

/**
 * shash_table_create - Create mallocs to hash table
 * @size: size to array in struct hash_table_t
 * Return: New struct type hash_table_t
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);
	hashTable->size = size;

	hashTable->array = calloc(size, sizeof(hash_node_t *));
	if (!hashTable->array)
	{
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}

/**
 * shash_table_set - Set node to hash table
 * @ht: hash table
 * @key: key to new node in hash table
 * @value: value to save with the key in the new node
 * Return: 0 if fail or 1 if is success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int valKey = 0;
	hash_node_t *newNode = NULL, *temp = NULL;

	if (!ht || !key || !value || !*key)
		return (0);
	valKey = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[valKey];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	if (!newNode->key)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key), free(newNode);
		return (0);
	}
	newNode->next = ht->array[valKey], ht->array[valKey] = newNode;
	return (1);
}

/**
 * shash_table_get - get a node with key
 * @ht: shash_table_t
 * @key: key to get a node
 * Return: Value in the key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
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

/**
 * shash_table_print - Print a hash table
 * @ht: shash_table_t
 * Return: Whitout return
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *tmp = NULL;
	int val = 0;

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			tmp = node;
			while (tmp)
			{
				if (val)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				val = 1;
			}
		}
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - delete a hash table
 * @ht: shash_table_t
 * Return: without return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	print("");
}

/**
 * shash_table_delete - delete a hash table
 * @ht: shash_table_t
 * Return: without return
 */
void shash_table_delete(shash_table_t *ht)
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
