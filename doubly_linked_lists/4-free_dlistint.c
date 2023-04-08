#include "lists.h"

/**
 * free_dlistint - function that frees a dlistintt list
 *@head: a pointer to a pointer to the head of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_dlistint(head->next);
		}
		free(head);
	}
}
