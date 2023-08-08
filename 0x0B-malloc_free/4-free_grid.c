#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously
 * @grid: 2d grid
 * @height: dimensional height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
