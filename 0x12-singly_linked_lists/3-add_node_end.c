#include "lists.h"

/**
 * *add_node_end - Adds a note at the end of a list
 * @head: The head of the list to add node to
 * @str: The node to be added
 *
 * Return: The address of the new element else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	currentNode = *head;

	if (currentNode == NULL)
		*head = newNode;
	else
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}

	return (*head);
}
