#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, print_it = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	putchar('{');
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (print_it)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			print_it++;
		}
		i++;
	}
	printf("}\n");
}
