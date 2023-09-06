#include "main.h"
/**
 * **alloc_grid - Creates a two dimensional array and returns a pointer
 * @width: Integer input
 * @height: Integer input
 * Return: A pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **twoarray;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	twoarray = malloc(height * sizeof(*twoarray));
	if (twoarray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoarray[i] = malloc(width * sizeof(**twoarray));
		if (twoarray[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(twoarray[i]);
			free(twoarray);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			twoarray[i][j] = 0;
	}
	return (twoarray);
}
