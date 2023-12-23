#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @key: Data type
 *
 * @ht: Data type
 *
 * Return: val key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *nd;

	if (!ht || *key == '\0' || !key)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
	{
		return (NULL);
	}
	nd = ht->array[idx];
	while (nd && strcmp(nd->key, key) != 0)
	{
		nd = nd->next;
	}
	if (!nd)
	{
		return (NULL);
	}
	else
	{
		return (nd->value);
	}
}
