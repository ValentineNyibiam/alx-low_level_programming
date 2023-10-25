#include "lists.h"

/**
 * *get_nodeint_at_index - Returns the nth node of a list
 * @head: The head of the list
 * @index: The index of the node to be returned
 *
 * Return: The nth node of the list, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int ncount = 0;
	
	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		ncount++;
		head = head->next;
	}

	if (index >= ncount)
		return (NULL);

	ncount = 0;
	while (ncount < index)
	{
		current = current->next;
		ncount++;
	}

	return (current);
}
