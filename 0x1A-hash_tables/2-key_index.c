#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key to find its index
 * @size: The size of the hash table
 *
 * Return: The index at which the key/value pair
 * should be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_hash;
	unsigned long int key_index;

	if (key == NULL)
		return (-1);

	/* Determine the hash value of the key*/
	key_hash = hash_djb2(key);

	/* Determine the index of the key */
	key_index = key_hash % size;

	return (key_index);
}
