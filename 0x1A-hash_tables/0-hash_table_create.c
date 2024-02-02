#include "hash_tables.h"

/**
 * hash_table_create - This is a function that creates a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht;

	/* Allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;

	/* Allocate memory for the array of hash_node_t pointers */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Inialize each member/cell of the ht array */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
