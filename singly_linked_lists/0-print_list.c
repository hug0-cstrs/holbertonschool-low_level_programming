#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: Returns the number of elements in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}

