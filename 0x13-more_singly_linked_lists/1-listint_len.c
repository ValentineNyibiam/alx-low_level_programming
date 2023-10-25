#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: The head of the linked list
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
