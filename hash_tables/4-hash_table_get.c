#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with key or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp;

    if (ht == NULL || key == NULL)
    {
        return (NULL);
    }

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];

    if (temp == NULL)
    {
        return (NULL);
    }

    while (strcmp(temp->key, key) != 0)
    {
        temp = temp->next;
    }

    return (temp->value);
}
