#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: Data type
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int inc = 0;
	hash_node_t *nd;
	unsigned char flag;

	flag = 0;
	if (!ht)
	{
		return;
	}
	printf("{");
	while (inc < ht->size)
	{
		if (ht->array[inc])
		{
			if (flag == 1)
			{
				printf(", ");
			}
			nd = ht->array[inc];
			while (nd)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd)
					printf(", ");
			}
			flag = 1;
		}
		inc++;
	}
	printf("}\n");
}
