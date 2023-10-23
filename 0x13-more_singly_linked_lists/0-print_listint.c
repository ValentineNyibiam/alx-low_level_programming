#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 * @h: The head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
