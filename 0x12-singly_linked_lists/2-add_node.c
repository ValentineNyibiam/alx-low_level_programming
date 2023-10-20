#include "lists.h"

/**
 * *add_node - Adds a note at the beginning of a list
 * @head: The head of the list to add node to
 * @str: The node to be added
 *
 * Return: The address of the new element else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
