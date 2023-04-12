#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int start;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0, start = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (start == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}

			start = 1;
		}
	}
	printf("}\n");
}
