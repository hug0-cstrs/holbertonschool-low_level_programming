#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *runner;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				runner = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = runner;
			}
		}
	}
	free(ht->array);
	free(ht);
}
