#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node at a position
 * @head: header of the list
 * @index: position of the new node
 * Return: 1 if succeed or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2 = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		temp = NULL;
		return (1);
	}

	while (index > 0)
	{
		temp = temp->next;
		if (!temp)
		{
			return (-1);
		}
		index--;
	}

	if (temp->next == NULL)
	{
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		return (1);
	}

	temp2 = temp->prev;
	temp2->next = temp->next;
	temp->next->prev = temp2;
	free(temp);
	temp = NULL;
	return (1);
}
