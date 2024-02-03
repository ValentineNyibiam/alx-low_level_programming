#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to update or add key
 * @key: The key, it can not be an empty string
 * @value: The value associated with the key
 *
 * Return: 1(success) else 0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hnode, *current;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}

	hnode = malloc(sizeof(hash_node_t));
	if (hnode == NULL)
		return (0);
	hnode->key = strdup(key);
	if (hnode->key == NULL)
	{
		free(hnode);
		return (0);
	}
	hnode->value = value_copy;
	hnode->next = ht->array[index];
	ht->array[index] = hnode;

	return (1);
}
