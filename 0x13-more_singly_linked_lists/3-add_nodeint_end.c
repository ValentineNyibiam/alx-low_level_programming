#include "lists.h"

/**
 * *add_nodeint_end - Adds a new node at the end of a list
 * @head: Head of list to add node to
 * @n: Value to store in the new node
 *
 * Return: The address of the new element(Success)
 * Else NULL(Failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare new node */
	listint_t *newNode, *temp;

	/* Allocate memory for new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Initialize new node */
	newNode->n = n;

	/* Add new node to list */
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (*head);
}
