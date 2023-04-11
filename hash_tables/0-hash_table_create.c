#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hashtable empty
 * @size: size of the array in the hashtable
 * Return: new hashtable or null if fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Initialize a pointer to NULL */
	hash_table_t *hashtable = NULL;

	/* Allocate memory for hash_table_t struct and assign it to the pointer */
	hashtable = malloc(sizeof(hash_table_t));

	/* Check if the allocation was successful */
	if (hashtable == NULL)
	{
		return (NULL);
	}

	/* Set the size of the hash table */
	hashtable->size = size;

	/* Allocate memory for the array of pointers to hash_node_t structs */
	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	/* Check if the allocation was successful */
	if (hashtable->array == NULL)
	{
		/* Free the previously allocated memory and return NULL if the allocation failed */
		free(hashtable);
		return (NULL);
	}

	/* Return a pointer to the created hash table */
	return (hashtable);
}
