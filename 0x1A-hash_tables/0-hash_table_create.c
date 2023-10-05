#include "hash_tables.h"

/**
 * hash_table_create - hash table to be created
 * @size: Array size
 *
 * Return: - NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int b;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; b < size; b++)
		ht->array[b] = NULL;

	return (ht);
}
