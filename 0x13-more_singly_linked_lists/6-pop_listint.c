#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: A pointer to the head of the list
 *
 * Return: The node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num;

	/* Check if head is null */
	if (temp == NULL)
		return (0);

	/* Remove the head node */
	num = temp->n;
	*head = temp->next;

	free(temp);

	return (num);
}
