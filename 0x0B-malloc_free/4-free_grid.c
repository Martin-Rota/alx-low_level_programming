#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid.
 * @grid: Pointer to the grid.
 * @height: Number of rows in the grid.
 */
void free_grid(int **grid, int height)

{
	if (grid == NULL || height <= 0)
	{
		return();
	}

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
