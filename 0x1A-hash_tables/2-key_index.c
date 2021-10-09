#include "hash_tables.h"

/**
 * key_index - get new position to a Key.
 * @key: char *.
 * @size: size of hash.
 * Return: position to key get.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int valKey = 0;

	valKey = hash_djb2(key);
	return (valKey % size);
}
