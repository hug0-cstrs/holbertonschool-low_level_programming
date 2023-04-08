#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a dlistint_t list
 *@head: a pointer to a pointer to the head of the list
 *@n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		new = NULL;
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
