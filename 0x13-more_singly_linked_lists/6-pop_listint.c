#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: A pointer to the head of the list
 *
 * Return: The node's data
 */
int pop_listint(listint_t **head)
{
	int i = 1;
	listint_t *current;

	if (*head == NULL)
		return (0);

	while (i < 2)
	{
		current = *head;
		*head = (*head)->next;
		i++;
	}
	*head = current->next;

	return (current->n);
}
