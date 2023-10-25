#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a new node at a given position in a list
 * @head: A pointer to the list to add where a node will be added
 * @idx: The index of the list where the new node should be added
 * @n: The value to be added to the new node
 *
 * Return: The address of the new node(Success), else NULL(Failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Declare varialbles */
	listint_t *newNode, *current = *head;
	unsigned int index = 1;

	/* Check if list is valid */
	if (*head == NULL)
		return (NULL);

	/* Allocate memory for node and check allocation */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Initialize newNode */
	newNode->n = n;

	/* Iterate to idx and add the newNode */
	while (current != NULL)
	{
		if (index == idx)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		index++;
		current = current->next;
	}

	return (NULL);
}
