#include "lists.h"

/**
 * list_len - Returns number of elements in a list
 * @h: Singly linked list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 1;

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
