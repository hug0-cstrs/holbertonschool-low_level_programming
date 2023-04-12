#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i; /* Déclare une variable entière non signée de type long qui sera utilisée comme index pour parcourir la table de hachage */
	hash_node_t *temp; /* Déclare un pointeur vers un noeud de la table de hachage */
	int start; /* Déclare une variable entière qui sera utilisée pour savoir si on a déjà imprimé une paire clé-valeur dans la table de hachage */

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0, start = 0; i < ht->size; i++) /* Itère sur chaque index de la table de hachage en utilisant la variable i */
	{
		temp = ht->array[i]; /* Définit le pointeur temporaire temp pour pointer sur le noeud à l'index i */
		if (temp != NULL) /* Vérifie si le noeud temporaire n'est pas NULL (c'est-à-dire qu'il contient une paire clé-valeur) */
		{
			if (start == 1) /* Vérifie si on a déjà imprimé une paire clé-valeur dans la table de hachage */
			{
				printf(", "); /* Si oui, imprime une virgule et un espace pour séparer les paires clé-valeur */
			}
			printf("'%s': '%s'", temp->key, temp->value); /* Imprime la paire clé-valeur correspondant au noeud temporaire*/
			while ((temp = temp->next) != NULL) /* Parcourt les noeuds suivants (s'il y en a) en utilisant la liste chaînée */
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value); /* Imprime la paire clé-valeur correspondant au noeud temporaire suivant */
			}

			start = 1; /* Met la variable start à 1 pour indiquer qu'on a imprimé au moins une paire clé-valeur dans la table de hachage */
		}
	}
	printf("}\n");
}
