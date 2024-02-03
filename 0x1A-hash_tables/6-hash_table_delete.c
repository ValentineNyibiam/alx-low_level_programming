#include "hash_tables.h"

/**
 * hash-table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			free(current->key);
			free(current->value);
			free(current);
			current = current->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
