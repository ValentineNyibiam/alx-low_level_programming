#include "lists.h"

/**
 * sum_listint - Returns the sum of the data in a linked list
 * @head: The head of the list
 *
 * Return: The sum of data in the list, else 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
