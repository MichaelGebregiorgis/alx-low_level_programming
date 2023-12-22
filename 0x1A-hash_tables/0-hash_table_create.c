#include "hash_tables.h"
/**
 * hash_table_create - Create hash table
 *
 * @size: Data type
 *
 * Return: ptr
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int inc;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
	{
		return (NULL);
	}
	while (inc < size)
	{
		hash->array[inc] = NULL;
		inc++;
	}
	return (hash);
}
