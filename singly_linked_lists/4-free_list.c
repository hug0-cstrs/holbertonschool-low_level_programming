#include "lists.h"
/**
 * free_list - function that frees a list_t list
 *@head: a pointer to a pointer to the head of the list
 *
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
			head->next = NULL;
		}
		free(head->str);
		head->str = NULL;
		free(head);
		head = NULL;
	}
}
