#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @size: size of the array in the hashtable
 * @key: key
 * Return: value of the index of the key related
 */

/* This function takes in a key (a string input as an unsigned char pointer) and a size (the size of the hash table) and returns an index in the hash table where the key-value pair should be stored*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Initialize a variable to hold the hash value generated from the key */
	unsigned long int value = 0;

	/* Generate a hash value using the djb2 algorithm for the key */
	value = hash_djb2(key);

	/* Take the modulo of the hash value with the size of the hash table */
	value = value % size;

	/* Return the resulting index in the hash table */
	return (value);
}
