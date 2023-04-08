#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: Returns the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

