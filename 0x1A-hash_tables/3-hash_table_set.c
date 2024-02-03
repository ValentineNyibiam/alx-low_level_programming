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
	hash_node_t *hnode;
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Determine index of the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Allocate memory for the new node and add it to the hash table*/
	hnode = malloc(sizeof(hash_node_t));
	if (hnode == NULL)
		return (0);
	hnode->key = strdup(key);
	if (hnode->key == NULL)
	{
		free(hnode);
		return (0);
	}
	hnode->value = strdup(value);
	if (hnode->value == NULL)
	{
		free(hnode);
		free(hnode->key);
		return (0);
	}
	hnode->next = ht->array[index];
	ht->array[index] = hnode;

	return (1);
}
