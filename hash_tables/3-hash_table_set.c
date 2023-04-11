#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: current key
 * @value: value associated with the key
 * Return: 1 if succeed or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *temp, *new;
    /* Vérifie que les paramètres ne sont pas nuls */
    if (ht == NULL || key == NULL || value == NULL)
    {
        return (0);
    }
    /* Calcule l'index correspondant à la clé */
    index = key_index((const unsigned char *)key, ht->size);
    /* Initialise un pointeur à la position correspondante dans la table de hachage */
    temp = ht->array[index];

    /* Parcours les nodes suivants jusqu'à trouver la clé ou la fin de la liste */
    while (temp != NULL)
    {
        /* Si la clé est trouvée, il met à jour la valeur associée */
        if (strcmp(temp->key, key) == 0)
        {
            temp->value = strdup(value);
            return (1);
        }
        temp = temp->next;
    }

    /* Si la clé n'existe pas encore, crée une nouvelle clé avec sa valeur*/
    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        return (0);
    }
    new->key = strdup(key);
    new->value = strdup(value);
    new->next = NULL;

    /* Ajoute la nouvelle node en tête de liste, si la position était déjà occupée */
    if (ht->array[index] != NULL)
    {
        new->next = ht->array[index];
    }

    /* Met à jour le pointeur ht pour pointer sur la nouvelle paire */
    ht->array[index] = new;

    return (1);
}
