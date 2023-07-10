#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int h, w;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	/* allocate memory for rows */
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (h = 0; h < height; h++) /*allocate memory for columns of each row*/
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL) /* validate memory */
		{
			for (h = 0; h < height; h++)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++) /* set array values to 0 */
			grid[h][w] = 0;
	}

	return (grid);
}
