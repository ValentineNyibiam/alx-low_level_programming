#include "main.h"

/**
 * **alloc_grid - allocates memory for a two dimensional
 * array of integers
 * @width: the number of columns of the array
 * @height: the number of rows in the array
 *
 * Return: a double pointer pointing to the
 * allocated memory for the 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **alloc_mem;

	/* check if width or height is less than zero */
	if (width < 1 || height < 1)
		return (NULL);

	/* allocate memory for the 2d array */
	alloc_mem = malloc(sizeof(*alloc_mem) * height);

	/* check if memory allocation is successful */
	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return (NULL);
	}

	/* intialize each element of the grid to 0 */
	for (i = 0; i < height; i++)
	{
		alloc_mem[i] = malloc(sizeof(**alloc_mem) * width);
		if (alloc_mem[i] == NULL)
		{
			free(alloc_mem[i]);
			free(alloc_mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			alloc_mem[i][j] = 0;
	}
	return (alloc_mem);
}
