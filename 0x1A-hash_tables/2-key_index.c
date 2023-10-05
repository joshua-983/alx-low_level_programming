#include "hash_tables.h"

/**
 * key_index - Get key or value
 * @key: The key to get the index of.
 * @size: size of the array hash table
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

