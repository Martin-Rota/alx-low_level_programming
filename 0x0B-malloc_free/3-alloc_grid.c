#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2-dimensional array of integers
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: On success, returns a pointer to the allocated grid.
 *         If width or height is 0 or negative, returns NULL.
 *         If memory allocation fails, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{

			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

