#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: The head of the list to free
 */
void free_list(list_t *head)
{
	list_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}
