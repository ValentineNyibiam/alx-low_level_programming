#include "lists.h"

/**
 * *add_nodeint - Adds a node at the beginning of a list
 * @head: Pointer to the head of the list
 * @n: The element to add the list
 *
 * Return: Address of the new element(Success)
 * Else NULL(Failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare new node */
	listint_t *newNode;

	/* Allocate memory for new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Initialize new node */
	newNode->n = n;

	/* Add new node to list beginning */
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	/* Return updated list */
	return (*head);
}
