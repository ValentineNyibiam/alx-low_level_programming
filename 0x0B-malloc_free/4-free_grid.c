#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: double pointer two dimensional grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
