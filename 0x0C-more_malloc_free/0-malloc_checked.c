#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 * else terminates with status 98
 */
void *malloc_checked(unsigned int b)
{
	/* declare pointer */
	void *alloc_mem;

	/* allocate dynamic memory*/
	alloc_mem = malloc(b);

	/* check if allocation was successfull */
	if (alloc_mem == NULL)
		exit(98);

	return (alloc_mem);
}
