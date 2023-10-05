#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: the pointer to the grid to be freed
 * @height: the height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
