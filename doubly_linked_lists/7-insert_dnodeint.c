#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node in a linked listat index pos
 *@h: pointer to the first node in the list
 *@idx: index where the new node is added
 *@n: data to insert in the new node
 *Return: pointer to the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = NULL;
	dlistint_t *temp2 = NULL;


	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx != 1)
	{
		temp = temp->next;
		if (!temp)
		{
			free(temp);
			temp = NULL;
			return (NULL);
		}
		idx--;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;

	return (new_node);
}
