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

	if (h == NULL)
		return (node_count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
