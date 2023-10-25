#include "lists.h"

/**
 * free_listint2 - Frees a list and sets the head to NULL
 * @head: The head of the list to be freed
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
