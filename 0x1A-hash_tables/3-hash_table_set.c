#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @key: Data type
 *
 * @value: Data type
 *
 * @ht: Data type
 *
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *mem;
	char *valCpy;
	unsigned long int idx, inc;

	if (*key == '\0' || ht == NULL || !key || !value)
	{
		return (0);
	}
	valCpy = strdup(value);
	if (!valCpy)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	inc = index;
	while (ht->array[inc])
	{
		if (strcmp(ht->array[inc]->key, key) == 0)
		{
			free(ht->array[inc]->value);
			ht->array[inc]->value = valCpy;
			return (1);
		}
		inc++;
	}
	mem = malloc(sizeof(hash_node_t));
	if (!mem)
	{
		free(valCpy);
		return (0);
	}
	mem->key = strdup(key);
	if (!mem->key)
	{
		free(mem);
		return (0);
	}
	mem->value = valCpy;
	mem->next = ht->array[idx];
	ht->array[idx] = mem;

	return (1);
}
