#include "main.h"

/**
 * *_calloc - allocates memory for an array and
 * initializes values to zero
 * @nmemb: number of blocks to be allocated
 * @size: size of each block to be allocated
 *
 * Return: a pointer to the allocated memory
 * else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* initialize variables */
	void *alloc_mem;

	/* check for nmemb and size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory dynamically */
	alloc_mem = calloc(nmemb, size);

	/* check if memory allcation was successful */
	if (alloc_mem == NULL)
		return (NULL);

	return (alloc_mem);
}
