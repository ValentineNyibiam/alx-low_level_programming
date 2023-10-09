#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: the minumum value the array will contain
 * @max: the maximum value the array will contain
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	/* initialize variables */
	int *alloc_mem;
	int i, mem_alloc;

	/* check if min is greater than max */
	if (min > max)
		return (NULL);

	/* determine the amount of memory to allocate */
	mem_alloc = max - min + 1;

	/* allocate memory dynamically */
	alloc_mem = malloc(sizeof(int) * mem_alloc);

	/* check if allocation was successful */
	if (alloc_mem == NULL)
		return (NULL);

	/* initalize allocated memory */
	for (i = 0; i < mem_alloc; i++, min++)
	{
		alloc_mem[i] = min;
	}

	return (alloc_mem);
}
