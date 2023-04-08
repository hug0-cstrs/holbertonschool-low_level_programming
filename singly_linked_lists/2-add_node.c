#include "lists.h"
/**
 * add_node - function that adds a new node to the beginning of a linked list
 *@head: a pointer to a pointer to the head of the list
 *@str: a pointer to a string
 *
 * Return: returns a pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		new = NULL;
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
