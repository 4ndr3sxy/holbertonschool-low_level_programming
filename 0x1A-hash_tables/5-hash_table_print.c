#include "hash_tables.h"

/**
 * count_words - called by hash_table_print()
 * @ht: hash table
 * Return: count of words in the hash table
 */
unsigned long int count_words(const hash_table_t *ht)
{
	unsigned long int j = 0;
	int count = 0;

	for (; j < ht->size; j++)
	{
		if (ht->array[j])
			count++;
	}
	return (count);
}

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 * Return: Whitout return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, countW = 0;
	int val = 0;
	hash_node_t *temp = NULL;

	printf("{");
	countW = count_words(ht);
	for (; ht && i < ht->size; i++)
	{
		if (ht->array[i])
		{
			val = -1;
			temp = ht->array[i];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (temp->next)
					printf(", ");
				temp = temp->next;
			}
			countW--;
			if (countW == 0)
				printf("}\n");
			else
				printf(", ");
		}
	}
	if (val == 0)
		printf("}\n");
}
