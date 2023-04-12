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
	unsigned long int index; /* Déclaration d'une variable pour stocker l'index */
	hash_node_t *temp;       /* Déclaration d'un pointeur pour stocker un noeud temporaire */

	if (ht == NULL || key == NULL) /* Si la table de hachage ou la clé est NULL, renvoyer NULL */
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size); /* Obtenir l'index de la clé en utilisant la fonction key_index()*/

	temp = ht->array[index]; /* Récupérer le noeud à l'index correspondant */

	if (temp == NULL) /* Si le noeud est NULL, cela signifie qu'il n'y a pas d'élément correspondant à la clé */
	{
		return (NULL);
	}

	while (strcmp(temp->key, key) != 0) /* Tant que la clé du noeud temporaire ne correspond pas à la clé recherchée */
	{
		temp = temp->next; /* Passer au noeud suivant */
	}

	return (temp->value); /* Renvoyer la valeur associée à la clé trouvée */
}
