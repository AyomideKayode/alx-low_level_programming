#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
		free(grid);

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
