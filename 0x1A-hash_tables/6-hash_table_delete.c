#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: Data type
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int inc = 0;
	hash_node_t *nd, *temp;
	hash_table_t *hd = ht;

	while (inc < ht->size)
	{
		if (ht->array[inc])
		{
			nd = ht->array[inc];
			while (nd)
			{
				temp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = temp;
			}
		}
		inc++;
	}
	free(hd->array);
	free(hd);
}
