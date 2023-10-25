#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: The head of the list to be freed
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	
	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
