#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the index of a list
 * @head: A pointe to the head of the list
 * @index: The index of the node that should be deleted
 *
 * Return: 1(Success), -1(Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Initialize current and counter */
	listint_t *temp, *current = *head;
	unsigned int ncount = 1;

	/* Check of list is empty or head pointer is null */
	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle case for first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Iterate list to acquire and remove node at given index */
	while (current != NULL)
	{
		if (ncount == index)
		{
			if (current->next != NULL)
			{
				temp = current->next;
				current->next = temp->next;
				free(temp);
				return (1);
			}
			else
				return (-1);
		}
		ncount++;
		current = current->next;
	}

	return (-1);
}
